
//TODO(henrysteinitz): replace instances of double with better float type (possibly templated)

class Tensor {
 public:
  double operator[](std::tuple<int> index);
  
 private:
  std::vector<double> data;
  std::tuple<int> shape;
}