#include <stdio.h>
#include <stdlib.h>

int main() {
	FILE *fp_in, *fp_out;
	fp_in = fopen ("case1.in", "r");
	fp_out = fopen ("case1.out", "w");

	int n, i, nr_casa, nr_B = 0, grad_1 = 0, grad_2 = 0, grad_3 = 0 , nr_F = 0, nr_C = 0;

	fscanf (fp_in, "%d", &n);
	for (i = 0; i < n; ++i) {
		fscanf (fp_in, "%d", &nr_casa);
		if (nr_casa / 1000 == 1) grad_1++;
		if (nr_casa / 1000 == 2) grad_2++;
		if (nr_casa / 1000 == 3) grad_3++;
		nr_B += (nr_casa % 1000) / 100;
		nr_F += (nr_casa % 100) / 10;
		nr_C += nr_casa % 10;
	}

	fprintf (fp_out, "%d\n%d\n%d\n%d\n%d\n%d", grad_1, grad_2, grad_3, nr_B, nr_F, nr_C);
	return 0;
}
