#include <stdio.h>

int main(){	
	// set buffer size to 0
	setvbuf(stdout, NULL, _IONBF, 0);
	
	// initialize input variable
	int input;
	
	do {
		printf("\n1. Say hello\n");
		printf("2. Say goodbye\n");
		printf("Enter a number: ");
		scanf("%d", &input);
	
		if (input == 1) { printf("Hello\n"); }
		else if (input == 2) { printf("Goodbye\n"); }
		else { printf("Invalid answer\n"); }
	} while (input != 2);

	// exit without errors
	return 0;
}
