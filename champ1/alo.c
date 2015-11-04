#include <stdio.h>
#include <stdlib.h>
int main() {
	int i, E, N;
	int *Nr, *D;
	FILE *fp_in, *fp_out;
	fp_in = fopen ("alo.in", "r");
	fp_out = fopen ("alo.out", "w");

	fscanf (fp_in, "%d", &E);
	fscanf (fp_in, "%d", &N);
	Nr = malloc(N * sizeof(int));
	D = malloc(N * sizeof(int));
	for (i = 0; i < N; ++i) {

		fscanf (fp_in, "%d", &Nr[i]);
		fscanf (fp_in, "%d", &D[i]);

	}
	for (i = 0; i < N; ++i) {
		if (Nr[i] % 10 == 5 && Nr[i]/10000 == 2) {
			E += D[i];
		}
		if (Nr[i] % 10 == 5 && Nr[i]/10000 == 1) {
			E -= 2 * D[i];
		}
	}
	fprintf (fp_out, "%d", E);

	fclose(fp_in);
	fclose(fp_out);

	return 0;
}
