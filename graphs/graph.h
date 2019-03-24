#include <vector>
#include <string>

#include "third_party/absl/container/flat_hash_map.h"
#include "node.h"

class Graph {
 public:
  std::vector<Node*> backwards_bfs(const string& parent_id,
                                   const string& child_id) const;

 private:
  // Graph stores a map from node ids to node pointers.
  // TODO(henrysteinitz): Decide if ids are really necessary.
  absl::flat_hash_map<string, std::shared_ptr<Node>> node_map_;
};
