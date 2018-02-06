

Derivative Derivative :: chain(Derivative dg) {
	Derivative dg_after_f(dg.get_matrix().times(df_matrix));
	return dg_after_f;
}

// Reverse of chain()
Derivative Derivative :: compose(Derivative dg) {
	Derivative df_after_g(df_matrix.times(dg.get_matrix()));
	return df_after_g;
}

Matrix Derivative :: get_matrix() {
	return df_matrix;
}