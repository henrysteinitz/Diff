
namespace water {
  
Tensor::operator[](std::Tuple<int> index) {
  
}
  
Status Tensor::ValidateIndex() {
  if (index.size() != shape.size()) {
    return InvalidArgument("...");
  }  
}
  
}