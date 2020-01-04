/* header file declaring all functions for fractions */

void writeAns(FILE *fout, int num, int denom);
void getOp(FILE *fin, char *op);
void readFrac(FILE *fin, int *np, int *dp);				// np and dp are pointers to num and denom
void reduce(int *np, int *dp); 						// np and dp are pointers to num and denom
void add(int n1, int d1, int n2, int d2, int *npfin, int *dpfin); 	// values for each fraction and pointers to final answer
void sub(int n1, int d1, int n2, int d2, int *npfin, int *dpfin); 	// values for each fraction and pointers to final answer
void mult(int n1, int d1, int n2, int d2, int *npfin, int *dpfin); 	// values for each fraction and pointers to final answer
