#include <stdio.h>
#include <stdlib.h>

int main() {
	int *subsidiar, *x, *y, n, i, j, aux;
	FILE *fp_in, *fp_out;
	fp_in = fopen ("siruri1.in", "r");
	fp_out = fopen ("siruri1.out", "w");

	fscanf (fp_in, "%d", &n);
	x = malloc(n * sizeof(int));
	y = malloc (n * sizeof (int));
	subsidiar = malloc (n * sizeof(int));

	for (i = 0; i < n; ++i) {
		y[i] = i + 1;
		fscanf (fp_in, "%d", &x[i]);
		subsidiar[i] = x[i];
	}

	for (i = 0; i < n - 1; ++i) {
		for (j = 0; j < n - i - 1; ++j) {
			if (subsidiar[j] > subsidiar[j + 1]) {
				aux = subsidiar[j];
				subsidiar[j] = subsidiar[j + 1];
				subsidiar[j + 1] = aux;
				aux = y[j];
				y[j] = y[j + 1];
				y[j + 1] = aux;
			}
		}
	}

	for (i = 0; i < n; i++) {
		x[y[i] - 1] = i + 1;
	}

	for (i = 0; i < n; ++i) {
		fprintf (fp_out, "%d ", x[i]);
	}
	return 0;
}
