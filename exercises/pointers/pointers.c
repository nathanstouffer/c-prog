#include <stdio.h>

int main() {
	int m = 10, n = 5;

	int *mp, *np;
	mp = &m;
	np = &n;
	*mp = *mp + *np;
	*np = *mp - *np;
	printf("%d %d %d %d", m, *mp, n, *np);
}
