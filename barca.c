#include <stdio.h>

int main() {
	FILE *fp_in;
	FILE *fp_out;
	int n, i;

	fp_in = fopen ("barca.in", "r");
	fp_out = fopen ("barca.out", "w");

	fscanf (fp_in, "%d", &n);

	fprintf (fp_out, "%d\n", 4 * n);

	for (i = 1; i <= n; ++i) {
		fprintf (fp_out, "IG\n");
		fprintf (fp_out, "I\n");
		fprintf (fp_out, "%d\n", i);
		fprintf (fp_out, "G\n");
	}

	fclose (fp_in);
	fclose (fp_out);

	return 0;
}
