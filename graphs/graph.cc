#include "graph.h"

namespace water {

std::vector<Node*> Graph::FindAllPaths(const string& parent_id,
                                       const string& child_id) const {
  PathsMap paths_from_node;
  std::queue<std::shared_ptr<Node>> node_queue;
  node_queue.push(node_map_[child_id]);
  while (!node_queue.empty()) {
    const std::shared_ptr<Node> node = node_queue.front();
    node_queue.pop();
    const std::vector<std::shared_ptr<Node>>& parents = node->parents();
    PathsVector child_paths = paths_from_node[node->id()];
    for (const std::shared_ptr<Node> parent : parents) {
      if (paths_from_node.contains(parent->id())) {
        node_queue.push(parent);
      }
      for (std::vector<string> path : child_paths) {
        path.push_back(parent->id());
        paths_from_node[parent->id()].push_back(std::move(path));
      }
    }
  }
  return paths_from_node[child_id];
}

}  // namespace water
