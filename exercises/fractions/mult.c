/* mult.c */

//#include <stdio.h> // for debugging

/*
 * function to multiply to fractions
 * the result is stored in the passed in pointers
 *
 * Result is not necessarily reduced
 */

void mult(int n1, int d1, int n2, int d2, int *npfin, int *dpfin) {
	//printf("n1: %d d1: %d\nn2: %d d2: %d\n", n1, d1, n2, d2);
	// store multiplication in pointers
	*npfin = n1 * n2;
	*dpfin = d1 * d2;
}
