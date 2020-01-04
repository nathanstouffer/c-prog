#include <math.h>

double computeDist(double *points) {
	// compute points differences
	double xdiff = points[2] - points[0];
	double ydiff = points[3] - points[1];

	// compute distance
	double dist = sqrt(xdiff*xdiff + ydiff*ydiff);
	// return distance
	return dist;
}
