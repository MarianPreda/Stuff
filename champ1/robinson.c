#include <stdio.h>
#include <stdlib.h>

int main () {
	FILE *fp_in, *fp_out;
	fp_in = fopen ("robinson.in", "r");
	fp_out = fopen ("robinson.out", "w");

	int i, j, k = 0, m, n, l, c, dir, *C, *L;
	fscanf (fp_in, "%d", &m);
	fscanf (fp_in, "%d", &n);
	fscanf (fp_in, "%d", &l);
	fscanf (fp_in, "%d", &c);
	int matrix[m][m];
	L = malloc (2 * m * sizeof(int));
	C = malloc (2 * m * sizeof(int));
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
	for (i = 1; i <= m; i++) {
		for (j = 1; j <=m; j++) {
			printf ("%d ", matrix[i][j]);
		}
		printf ("\n");
	}
	i = l;
	j = c;
	int count = 0;
	while (i >= 1 || i <= m || j >= 1 || j <= m) {
		if (matrix[i][j] == 0)
			break;
		L[k] = i;
		C[k] = j;
		k++;
		count++;
		if (matrix[i][j] % 4 == 0) {
			matrix[i][j] = 0;
			i--;
		} else
			if (matrix[i][j] % 4 == 1) {
				matrix[i][j] = 0;
				j++;
			} else
				if (matrix[i][j] % 4 == 2) {
					matrix[i][j] = 0;
					i++;
				} else
					if (matrix[i][j] % 4 == 3) {
						matrix[i][j] = 0;
						j--;
					}
	}

	fprintf (fp_out, "%d\n", matrix[m][m]);
	for (i = 0; i < count - 1; i++) {
		fprintf (fp_out, "%d %d\n", L[i], C[i]);
	}
	fclose(fp_in);
	fclose(fp_out);
	return 0;
}
