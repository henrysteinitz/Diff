#ifndef MATRIX_H
#define MATRIX_H

#include "vector.h"

class Matrix {
	Vector v;

	public:
		Matrix (int width, int height);
		void set(int x, int y, double value);
		double get(int x, int y);
};

#endif