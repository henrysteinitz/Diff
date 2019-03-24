class Node {
 public:
  Node backwards_bfs(string id) const;
  
  const string id() const {
    return id_; 
  }
 private:
  const string id_;
  std::vector<Node*> parents;
  std::vector<Node*> children;
}