/* getPointerSize.c */

#include "defs.h"

/*
 * Function to get the size of the pointer from the user.
 * Return value is an integer
 * 	0      => quit program
 * 	n > 0  => size user wants
 * Note: One postcondition of this function is that the size
 * must be 1 <= n <= 10
 */

int getPointerSize() {
	// print info to console
	printf("\n\nEnter a number between 1 and 10 (inclusive).\n");
	printf("Enter 0 to quit.\n");

	int size;
	// scan user input
	scanf("%d", &size);

	// check for valid entry
	while (size < 0 || size > 10) {
		// print info to console
		printf("\nInvalid entry\n");
		printf("Enter a number between 1 and 10 (inclusive).\n");
		printf("Enter 0 to quit.\n");

		// scan user input
		scanf("%d", &size);
	}

	// return specified size
	return size;
}
