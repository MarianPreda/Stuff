#include <stdio.h>

int cmmdc (int a, int b) {
	if (b == 0) {
		return a;
	} else {
		cmmdc (b, a % b);
	}
}

int main() {
	FILE *fp_in;
	FILE *fp_out;
	int a, b, i, n, cm;

	fp_in = fopen ("ingerasi.in", "r");
	fp_out = fopen ("ingerasi.out", "w");

	fscanf (fp_in, "%d", &n);
	fscanf (fp_in, "%d", &a);
	fscanf (fp_in, "%d", &cm);
	cm = cmmdc (cm, a);
	for (i = 0; i < n - 2; ++i) {
		fscanf (fp_in, "%d", &a);
		cm = cmmdc (cm, a);
	}

	fprintf (fp_out, "%d", cm);
	fclose (fp_in);
	fclose (fp_out);

	return 0;
}