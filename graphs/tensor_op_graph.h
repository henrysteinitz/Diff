// A TensorOpGraph is a graph with nodes that alternate between 
// TensorNodes and OpNodes. That is, all OpNodes have TensorNode children
// and all TensorNodes have OpNodes as children. This property is 
// enforced through error checks that happen whenever the graph is mutated.

#include "derivatives/derivative.h"
#include "graphs/graph.h"

class TensorOpGraph : Graph {
 public:
  Derivative Differentiate(const string& output_id, const string& input_id) const;

  absl::flat_hash_map<string, Tensor> Compute() const;
}
