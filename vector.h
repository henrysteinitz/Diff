#ifndef VECTOR_H
#define VECTOR_H

class Vector {
	double *v;

	public:
		Vector(int size);
		void set(int index, double value);
		double get(int index);
};

#endif