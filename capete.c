#include <stdio.h>

int main () {
	FILE *fp_in, *fp_out;
	fp_in = fopen ("capete.in", "r");
	fp_out = fopen ("capete.out", "w");
	int n;
	fscanf (fp_in, "%d", &n);
	fprintf (fp_out, "%d", 5 * n);
	fclose (fp_in);
	fclose (fp_out);
	return 0;
}
