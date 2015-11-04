#include <stdio.h>

int main() {
	int i, E, N;
	int Nr[10], D[10];
	FILE *fp_in, *fp_out;
	fp_in = fopen ("alo.in", "r");
	fp_out = fopen ("alo.out", "w");

	fscanf (fp_in, "%d", &E);
	fscanf (fp_in, "%d", &N);

	for (i = 0; i < N; ++i) {

		scanf ("%d", &Nr[i]);
		scanf ("%d", &D[i]);

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
