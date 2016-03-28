#include <stdio.h>

int cmmmc (int a, int b) {
	int p = a * b;
	while (a != b) {
		if (a > b) {
			a -= b;
		} else {
			b -= a;
		}
	}
	return p/a;
}

int main() {
	int cm, n, p, q;
	FILE *fp_in = fopen ("gardul.in", "r");
	FILE *fp_out = fopen ("gardul.out", "w");

	fscanf (fp_in, "%d", &n);
	fscanf (fp_in, "%d", &p);
	fscanf (fp_in, "%d", &q);
	cm = cmmmc (p, q);
	fprintf (fp_out, "%d\n", n - (((n/q) - (n/cm)) + ((n/p) - (n/cm)) + n/cm));
	fprintf (fp_out, "%d\n", ((n/p) - (n/cm)));
	fprintf (fp_out, "%d\n", ((n/q) - (n/cm)));
	fprintf (fp_out, "%d\n", n/cm);

	fclose(fp_in);
	fclose(fp_out);

	return 0;

}
