#include <stdlib.h>
#include "vector.h"

VectorNode :: VectorNode() {
	values = new std::vector<double>();
}

void VectorNode :: set(int index, double value) {
	values[index] = value;
}

double VectorNode :: get(int index) {
	return values[index];
}

void VectorNode :: insert(int index, double value) {
	values.inset(index, value);
}

void VectorNode :: add_factor(VectorNode* factor) {
	factors.push_back(factor);
}

int VectorNode :: size() {
	return values.size()
}

struct VectorNodePath {
	VectorNode* node;
	VectorNodePath* prev_node_path;

	VectorNodePath(VectorNode* n, VectorNodePath* p) {
		node = n;
		path = p;
	}
}

// Improve with CUDA
std::queue<VectorNodePath> VectorNode :: find_paths_from(VectorNode* v) {
	// simple bfs
	std::set<VectorNode*> visited_nodes = new std::set<VectorNode*>();
	std::queue<VectorNodePath> valid_paths = new std::queue<VectorNodePath>();
	std::queue<VectorNodePath> searched_paths = new std::queue<VectorNodePath>();
	VectorNode parent;
	VectorNode* factor;
	VectorNodePath path;
	while(!searched_paths.empty()) {
		path = searched_paths.pop_front()
		parent = *path.node;
		for (VectorNode* factor: parent.factors) {
			if (factor == v) {
				path = new VectorNodePath(factor, &path);
				valid_paths.push_back(path);
			} else if (visited_nodes.find(factor) != visited_nodes.end()) {
				path = new VectorNodePath(factor, &path);
				searched_paths.push_back(path);
			}
		}
	}
	delete visited_nodes;
	delete searched_paths;
	return valid_paths;
}

Derivative

Derivative Vector :: d_by_d(VectorNode* v) {
	// First obtain all paths from v to self
	VectorNode current;
	std::queue<VectorNodePath> paths = this.find_paths_from(v);

	Derivative d;
	for (std::queue<VectorNodePath> path: paths) {
		Derivative path_d; 
		while (path.) {

		}
	}
}

MatrixNode recursive_multiply() {

}

// improve with cuda
Vector Vector :: add(Vector v) {
	Vector u();

	for (int i = 0; i < length; i++) {
		u.set(i, this->get(i) + v.get(i));
	}
	return u;
}


double Vector :: dot(Vector v) {

}
