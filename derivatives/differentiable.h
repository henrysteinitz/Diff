#include "types/tensor.h"

namespace water {
  
// Every differentiable datatype implen
class Differentiable<T> {
 public:
  //TODO(henrysteinitz): On each operation restore
 private:
  virtual Tensor embed() const;
  virtual void restore();
}

}

