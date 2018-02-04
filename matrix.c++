#include "matrix.h"

Matrix :: Matrix(int w, int h) {
	Vector v(width * height);
	width = w;
	height = h;
}

void Matrix :: set(int x, int y, double value) {
	v.set(x + (y * width), value);
}

double Matrix :: get(int x, int y) {
	return v.get(x + (y * width), value);
}