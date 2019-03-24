#include "graph.h"
#include "node.h"

namespace water {

std::vector<Node*> Graph::BackwardBFS(const string& parent_id,
                                      const string& child_id) {
  return node_map_[child_id]->BackwardsBFS(parent_id);
}

} // namespace water
