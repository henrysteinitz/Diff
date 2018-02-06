#ifndef VECTOR_H
#define VECTOR_H

class Vector {
	double *v;
	int length;
	int id;
	OpTree ops;

	public:
		Vector(int l);
		void set(int index, double value);
		double get(int index);
		Vector plus(Vector w);
		Derivative d_plus(Vector w);
		Vector dot(Vector w);
		Derivative d_dot(Vector w);
};

#endif