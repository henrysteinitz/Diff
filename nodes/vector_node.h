#ifndef VECTOR_H
#define VECTOR_H

#include

class VectorNode {
	std::vector<double> values;
	std::string op_symbol;

	public:
		std::vector<VectorNode*> factors;

		Vector();
		double get(int index);
		void set(int index, double value);
		void insert(int index, double value);
		void add_factor(Vector* factor);
		int length();

		Vector plus(Vector w);
		Vector dot(Vector w);
};

#endif