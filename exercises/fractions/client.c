/* client.c */

/* A program to take in a file consisting of fractions and operators
 * and output the result of the mathematical operation both to a file
 * and the console
 */

#include <stdio.h>
#include "decs.h"	// include function declarations

int main() {
	// declare file pointers
	FILE *fin;
	FILE *fout;

	// open files
	fin = fopen("input.txt", "r");

	// get number of lines in file
	int num_lines;
	fscanf(fin, "%d", &num_lines);
	printf("%d operations to complete\n", num_lines);	// output info to console

	// declare variables needed for each computation
	char op; 		// operator
	int n1, d1;		// first fraction
	int n2, d2;		// second fraction
	int nans, dans;		// final answer

	// loop through each line
	int l;
	for (l = 0; l < num_lines; l++) {
		printf("computing operation %d: ", l+1); 	// output info to console
		
		// get fractions/ops from line in file
		readFrac(fin, &n1, &d1);
		getOp(fin, &op);
		readFrac(fin, &n2, &d2);

		// decide on operation
		switch (op) {
			case '+':
				// add
				add(n1, d1, n2, d2, &nans, &dans);
				break;
			case '-':
				// subtract
				sub(n1, d1, n2, d2, &nans, &dans);
				break;
			case '*':
				// multiply
				mult(n1, d1, n2, d2, &nans, &dans);
				break;
			case '/':
				// divide
				mult(n1, d1, d2, n2, &nans, &dans);
		}

		// reduce the result
		reduce(&nans, &dans);

		// output problem to console
		printf("%d/%d %c %d/%d = ", n1, d1, op, n2, d2);
		// write final answer to console and file
		writeAns(fout, nans, dans);
	}

	// close file pointers
	fclose(fin);
	fclose(fout);

	// exit without errors
	return 0;
}
