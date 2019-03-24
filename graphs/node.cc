namespace water {
  
Node* Node::backwards_bfs(string id) {
  std::queue<Node*> node_queue;
  for (Node* node : children_) {
    Node* temp_node = node_queue.pop_front();
    if (temp_node->id() == id) {
      //TODO(henrysteinitz): return path.
      return temp_node;
    }
    for (Node* child : temp_node->children()) {
      node_queue.push_back(child);
    }
  }
}
  
} // namespace water