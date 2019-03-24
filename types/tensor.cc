
namespace water {
  
double Tensor::operator[](std::Tuple<int> index) {
  ValidateIndex();

  double flat_index = 0;
  for (int i = 0; i < index.size(); i++) {
    double remaining_product = index[i];
    for (int j = i + 1; j < index.size(); j++) {
      remaining_product *= index[j];
    }
    flat_index += remaining_product;
  }
  return data_[flat_index];
}

void Tensor::ValidateIndex(std::Tuple<int> index) {
  if (index.size() != shape_.size()) {
    // TODO(henrysteinitz): Write a better error message.
    throw std::invalid_argument("Invalid tensor index");
  }
  for (int i = 0; i < index.size(); i++) {
    if (index[i] >= shape_[i]) {
      throw std::invalid_argument("Invalid tensor index");
    } else if (index[i] < -1 * shape_) {
      throw std::invalid_argument("Invalid tensor index");
    }
  }
}
  
} // namespace water