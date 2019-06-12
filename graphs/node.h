#include <memory>
#include <queue>
#include <vector>

#include "graph.h"

namespace water {

class Node {
 public:
  Node(string id) : id_(id) {}
  std::vector<Node*> FindAllPathsFrom(const string& id) const;
  void AddChild(const Node& child);

  const string id() const {
    return id_;
  }

  const std::shared_ptr<Graph> graph() const {
    return graph_;
  }

  const std::vector<std::shared_ptr<Node>> parents() const {
    return parents_;
  }

  const std::vector<std::shared_ptr<Node>> children() const {
    return children_;
  }

 private:
  const string id_;
  std::shared_ptr<Graph> graph_;
  std::vector<std::shared_ptr<Node>> parents_;
  std::vector<std::shared_ptr<Node>> children_;
};

}  // namespace water
