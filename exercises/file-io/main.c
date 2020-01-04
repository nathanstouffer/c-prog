/* main.c

 * This is a program to practice file input and output
 * The input file consists of lines with four numbers
 * The four numbers correspond to two points in R^2 
 * so the line
 * 0 0 1 0
 * corresponds to (0, 0) and (1, 0)
 * For each line, this program computes the distance between the 
 * two points and outputs that distance to the output file
 * distances.txt
 */

#include <stdio.h>
#include "defs.h"

int main() {
	// declare file pointers
	FILE *fin;
	FILE *fout;
	// variable to store the number of lines in the input file
	int num_lines;

	// open files
	fin = fopen("points.txt", "r");
	fout = fopen("output.txt", "w");

	// compute number of lines
	fscanf(fin, "%d", &num_lines);
	printf("%d lines in file\n", num_lines); // debugging line

	// output status
	printf("reading in points\n");

	// loop through lines
	for (int l = 0; l < num_lines; l++) {
		printf("computing line %d\n", l+1);
		// read in the four points into info array
		double points[4];
		int i;
		for (int i = 0; i < 4; i < i++) { fscanf(fin, "%lf", &points[i]); }

		double dist = computeDist(points);
		fprintf(fout, "Distance %d: %.2f\n", l+1, dist);
	}

	// output status
	printf("distances computed\n");

	// close files
	fclose(fin);
	fclose(fout);

	// exit without errors
	return 0;
}
