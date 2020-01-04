/* randPop.c */

#include "defs.h"
#include <time.h>

/*
 * Function to randomly populate a memory block with integers
 * up to the subindex 'len' (provided as a parameter)
 */

void randPop(int* nums, int len) {
	// set seed as current time of day
	srand((unsigned) time(0));

	// iterate throuch values of nums
	int l;
	for (l = 0; l < len; l++) {
		int val;
		// generate random value
		val = rand();
		// modulus by 100
		val = val % 100;

		// place value in array
		nums[l] = val;
	}
}
