/* writeAns.c */

#include <stdio.h>

void writeAns(FILE *fout, int num, int denom) {
	// print to console
	printf("%d/%d\n", num, denom);

	// output to file
	fprintf(fout, "%d/%d\n", num, denom);
}
