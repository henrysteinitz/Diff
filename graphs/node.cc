#import "node.h"
#include <memory>

namespace water {

PathsVector Node::FindAllPathsFrom(const string& child_id) const {
  // return graph call
}

void Node::AddChild(const Node& child) {
  children_.push_back(std::make_shared(child));
  child.parents().push_back(std::make_shared(this));
}

}  // namespace water
