

namespace water {
  
class TensorNode : Node {
 public:
  Tensor tensor() { return *tensor_; }

 private:
  std::unique_ptr<Tensor> tensor_;
}

}  // namespace water
