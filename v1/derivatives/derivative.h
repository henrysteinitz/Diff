#ifndef DERIVATIVE_H
#define DERIVATIVE_H

class Derivative {
	Matrix df_matrix;

	public:
		Derivative chain(Derivative dg) const; 
		Derivative compose(Derivative dg) const;
		Matrix get_matrix() const;
};

#endif