#include <stdio.h>
#include <stdlib.h>

int main () {
	FILE *fp_in, *fp_out;
	fp_in = fopen ("robinson.in", "r");
	fp_out = fopen ("robinson.out", "w");

	int i, j, m, n, l, c, dir, *v;
	fscanf (fp_in, "%d", &m);
	fscanf (fp_in, "%d", &n);
	fscanf (fp_in, "%d", &l);
	fscanf (fp_in, "%d", &c);
	int matrix[m][m];
	v = malloc (m * m * sizeof(int));

	for (j = 1; j <= m; ++j) {
		matrix[1][j] = n + j -1;
	}

	for (i = 1; i <= m; ++i) {
		matrix[i][1] = n + i - 1;
	}

	for (i = 2; i <= m; ++i) {
		for (j = 2; j <=m; j++) {
			matrix[i][j] = matrix[i - 1][j] + matrix[i][j - 1];
			if (matrix [i][j] > 999) {
				matrix [i][j] = matrix[i][j] % 1000;
			}
		}
	}

	fprintf (fp_out, "%d\n", matrix[m][m]);
	return 0;
}
