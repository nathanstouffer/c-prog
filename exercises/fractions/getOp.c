/* getOp.c */

#include <stdio.h>

void getOp(FILE *fin, char *op) { 
	char temp;
	fscanf(fin, " %c ", &temp);
	//printf("%c\n", temp);
	*op = temp;
}
