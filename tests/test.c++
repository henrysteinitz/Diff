#include "vector.h"
#include <iostream>

int main() {
	Vector v(2);
	v.set(0, 2.5);
	v.set(1, 1.5);
	printf("%lf", v.get(0));
	printf("%lf", v.get(1));
}