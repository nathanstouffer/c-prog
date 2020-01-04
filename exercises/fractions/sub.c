/* sub.c */

/* 
 * function to subtract two fractions
 * the result is stored in the argument pointers
 *
 * The result is not necessarily reduced
 */

void sub(int n1, int d1, int n2, int d2, int *npfin, int *dpfin) {
	// store original d1
	int d1orig = d1;

	// scale frac1 by d2
	n1 = n1 * d2;
	d1 = d1 * d2;

	// scale frace2 by original d1
	n2 = n2 * d1orig;
	d2 = d2 * d1orig;

	// store resulting subtraction in pointers
	*npfin = n1 - n2;
	*dpfin = d1;
}
