#include <stdio.h>
#include <stdlib.h>
int main() {
	int i, E, N, Nr, D;
	FILE *fp_in, *fp_out;
	fp_in = fopen ("alo.in", "r");
	fp_out = fopen ("alo.out", "w");

	fscanf (fp_in, "%d", &E);
	fscanf (fp_in, "%d", &N);
	for (i = 0; i < N; ++i) {
		fscanf (fp_in, "%d", &Nr);
		fscanf (fp_in, "%d", &D);
		if (Nr % 10 == 5 && Nr/10000 == 2) {
			E += D;
		}
		if (Nr % 10 == 5 && Nr/10000 == 1) {
			E -= 2 * D;
		}
	}

	fprintf (fp_out, "%d", E);

	fclose(fp_in);
	fclose(fp_out);

	return 0;
}
