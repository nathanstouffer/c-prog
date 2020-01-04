/* client.c */

/**
 * This small program is practice with memory allocation
 */

// import necessary libraries
#include "defs.h"

int main(void) {
	// set buffer size to zero for IO on MinGW stuff
	setvbuf(stdout, NULL, _IONBF, 0);

	// get size from user
	int size;
	size = getPointerSize();
	// size will be 0 if user wants to quit
	
	int* nums;
	// allocate memory for numbers
	if (size != 0) { nums = (int*)malloc(size * sizeof(int)); }

	// loop until user wants to quit
	while (size != 0) {
		// randomly populate nums
		randPop(nums, size);
		// print contents
		printNums(nums, size);

		// get new pointer size
		size = getPointerSize();
		if (size != 0) { nums = realloc(nums, size * sizeof(int)); }
	}

	// deallocate memory
	free(nums);

	// exit without errors
	return 0;
}
