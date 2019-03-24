namespace water {

Derivative TensorOpGraph::Differentiate(const string& output_id, const string& input_id) {
  std::shared_ptr<TensorNode> out_tensor_node = node_map_[output_id];
  std::shared_ptr<TensorNode> in_tensor_node = node_map_[input_id];
  std::vector<std::shared_ptr<Node>> path = out_tensor_node->backwards_bfs(in_tensor_node)
}

}