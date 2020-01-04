/* add.c */

/*
 * function to take in two fractions and add them
 * the result is stored in the pointers passed in
 *
 * The result is not necessarily reduced
 */

void add(int n1, int d1, int n2, int d2, int *npfin, int *dpfin) {
	// store temporary copy of d1
	int d1orig = d1;
	
	// scale frac1 by d2
	n1 = n1 * d2;
	d1 = d1 * d2;

	// scale frac2 by original d1
	n2 = n2 * d1orig;
	d2 = d2 * d1orig;

	// store resulting sum in pointers
	*npfin = n1 + n2;
	*dpfin = d1;
}
