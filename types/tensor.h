//TODO(henrysteinitz): replace instances of double with better float type (possibly templated)

class Tensor {
 public:
  double operator[](std::tuple<int> index);

  std::tuple<int> shape() {
    return shape_;
  }
 private:
  std::vector<double> data_;
  std::tuple<int> shape_;
}