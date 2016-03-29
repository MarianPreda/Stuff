#include <stdio.h>

int main() {
	int X, N, i, cont, max = 0;
	FILE *fp_in = fopen ("conturi.in", "r");
	FILE *fp_out = fopen ("conturi.out", "w");
	fscanf (fp_in, "%d", &N);
	fscanf (fp_in, "%d", &X);

	for (i = 1; i <= N; ++i) {
		fscanf (fp_in, "%d", &cont);
		if ((cont % 1000000) / 100000 == X) {
			if ((cont % 100000) / 10000 == 1) {
				if ((cont % 10000) > max) {
					max = cont % 10000;
				} else continue;
			}else continue;
		}else continue;
	}
	fprintf (fp_out, "%d", max);
	fclose(fp_in);
	fclose(fp_out);
	return 0;
}
