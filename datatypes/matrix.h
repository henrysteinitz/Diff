#ifndef MATRIX_H
#define MATRIX_H

#include "vector.h"

class Matrix {
	Vector v;
	int width;
	int height;

	public:
		Matrix (int w, int h);
		void set(int x, int y, double value);
		double get(int x, int y);
		Matrix times(Matrix m) const;
		Vector get_vector() const;
};

#endif