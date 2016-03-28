#include <stdio.h>
#include <stdlib.h>

int main () {
	FILE *fp_in, *fp_out;
	fp_in = fopen ("xyz.in", "r");
	fp_out = fopen ("xyz.out", "w");
	int x, y, z, nr, i;
	fscanf (fp_in, "%d", &x);
	fscanf (fp_in, "%d", &y);
	fscanf (fp_in, "%d", &z);
	nr = y;
	for (i = 1; i < x; i++) {
		nr = nr * 10 + z;
	}
	fprintf (fp_out, "%d", nr);
	return 0;
}
