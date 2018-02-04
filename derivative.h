#ifndef DERIVATIVE_H
#define DERIVATIVE_H

class Derivative {
	Matrix df_matrix;

	public:
		Derivative chain(Derivative dg); 
		Derivative compose(Derivative dg);

};

#endif