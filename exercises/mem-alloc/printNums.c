/* printNums.c */

#include "defs.h"

/*
 * Function to print an array to the console
 */

void printNums(int* nums, int len) {
	if (len == 0) { printf("No values.\n"); }
	else {
		// print first value to console
		printf("Values: { %d", nums[0]);
		// interate through array
		int l;
		for (l = 1; l < len; l++) {
			// print each value to console
			printf(", %d", nums[l]);
		}
		// print end of array
		printf(" }\n");
	}
}
