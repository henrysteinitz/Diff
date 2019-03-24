namespace water {
  
class OpNode : Node {
  
 public:
  Op op() const {
    return op;
  }
  
 private:
  std::shared_ptr<Op> op_;
}
  
}