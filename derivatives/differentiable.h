#include "types/tensor.h"

namespace water {
  
// Every differentiable datatype implen
class Differentiable {
 public:
  Differentiable() {
    // TODO(henrysteinitz): Embed the 
  }
  // TODO(henrysteinitz): On each operation restore
 private:
  virtual Tensor Embed() const;
  virtual void Restore();
  
  std::shared_ptr<TensorNode> tensor_node_;
  std::shared_ptr<TensorGraph> tensor_graph_;
}

}

