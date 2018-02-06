#include <stdlib.h>
#include "vector.h"

Vector :: Vector(int l) {
	v = (double *) malloc(sizeof(double) * l);
	length = l;
	// set id to random hash
}

void Vector :: set(int index, double value) {
	v[index] = value;
}

double Vector :: get(int index) {
	return v[index];
}

// improve with cuda
Vector Vector :: add(Vector w) {
	Vector u(length);
	for (int i = 0; i < length; i++) {
		u.set(i, this->get(i) + w.get(i));
	}
	return u;  
}
