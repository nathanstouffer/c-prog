/* readFrac.c */

#include <stdio.h>

void readFrac(FILE *fin, int *np, int *dp) {
	// declare local variables for num and denom
	//printf("readfrac test\n");
	int n, d;
	// scan from file
	fscanf(fin, "%d/%d", &n, &d);
	//printf("n: %d d: %d\n", n, d);
	// check for division by 0
	if (d == 0) { printf("div by 0 error\n"); }
	// update pointers
	*np = n;
	*dp = d;
}
