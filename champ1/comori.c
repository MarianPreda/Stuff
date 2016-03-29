#include <stdio.h>

int main() {
	int i, x = 0, y = 0, d, p, N;
	FILE *fp_in = fopen("comori.in", "r");
	FILE *fp_out = fopen("comori.out", "w");
	fscanf (fp_in, "%d", &N);
	for (i = 0; i < N; ++i) {
		fscanf(fp_in, "%d", &d);
		fscanf(fp_in, "%d", &p);

		if (d == 1) {
			y += p;
		}
		if (d == 2) {
			x += p;
			y += p;
		}
		if (d == 3) {
			x += p;
		}
		if (d == 4) {
			x += p;
			y -= p;
		}
		if (d == 5) {
			y -= p;
		}
		if (d == 6) {
			x -= p;
			y -= p;
		}
		if (d == 7) {
			x -= p;
		}
		if (d == 8) {
			x -= p;
			y += p;
		}
	}
	fprintf (fp_out, "%d %d", x, y);
	fclose(fp_in);
	fclose(fp_out);
	return 0;
}
