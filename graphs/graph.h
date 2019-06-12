// A collection of nodes. Nodes are owned by the outer graph and surrounding
// nodes. The primary purpose of this class is to be subclassed by
// TensorOpGraph, which is stores op history and performs automatic
// differentiation.

#include <string>
#include <vector>

// TODO(henrysteinitz): Package absl into this directory.
#include "node.h"
#include "third_party/absl/container/flat_hash_map.h"
#include "third_party/absl/container/flat_hash_set.h"

namespace water {

using PathsMap =
    absl::flat_hash_map<string, std::vector<std::vector<string>>, >;
using PathsVector = std::vector<std::vector<string>>;

class Graph {
 public:
  std::vector<Node*> FindAllPaths(const string& parent_id,
                                  const string& child_id) const;

  // Returns a vector of nodes with the property that the index(A) <= index(B)
  // if there exists a path from A to B.
  std::vector<Node*> FindComputeOrder(
      const absl::flat_hash_set<Node*> sources,
      const absl::flat_hash_set<Node*> destinations);

 private:
  // Graph stores a map from node_ids to nodes.
  absl::flat_hash_map<string, std::shared_ptr<Node>> node_map_;
};

}  // namespace water
