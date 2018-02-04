#include <stdlib.h>
#include "vector.h"

Vector :: Vector(int size) {
	v = (double *) malloc(sizeof(double) * size);
}

void Vector :: set(int index, double value) {
	v[index] = value;
}

double Vector :: get(int index) {
	return v[index];
}