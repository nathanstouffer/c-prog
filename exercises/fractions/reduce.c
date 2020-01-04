/* reduce.c */

int gcd(int n1, int n2); // function prototype

/* 
 * function to reduce two fractions and store the
 * result in the pointers
 */

void reduce(int *np, int *dp) {
	// compute gcd
	int div;
	if (*np <= *dp) { div = gcd(*np, *dp); }
	else { div = gcd(*dp, *np); }

	// update values in pointers
	*np = *np / div;
	*dp = *dp / div;
}

/*
 * function to find and return the greatest common
 * divisor of two integers
 *
 * This function assumes that n1 <= n2
 */

int gcd(int n1, int n2) {
	int found = 0; 		// assume we have not found a divisor yet
	int div = n1;		// set the greatest possible divisor to n1
	while (div > 0 && found == 0) {
		// check for divisibility
		if (n1 % div == 0 && n2 % div == 0) { 
			found = 1; // set found to true 
		}
		else { div = div - 1; } // decrement div
	}
	// return the divisor
	return div;
}
