#include <stdio.h>
#include <stdlib.h>

int main () {
	FILE *fp_in, *fp_out;
	fp_in = fopen ("robinson.in", "r");
	fp_out = fopen ("robinson.out", "w");

	int i, j, k = 0, m, n, l, c, *C, *L;
	fscanf (fp_in, "%d", &m);
	fscanf (fp_in, "%d", &n);
	fscanf (fp_in, "%d", &l);
	fscanf (fp_in, "%d", &c);
	int matrix[m + 1][m + 1];
	L = malloc (m * sizeof(int));
	C = malloc (m * sizeof(int));
	for (j = 1; j <= m; ++j) {
		matrix[1][j] = n + j -1;
	}

	for (i = 1; i <= m; ++i) {
		matrix[i][1] = n + i - 1;
	}

	for (i = 2; i <= m; ++i) {
		for (j = 2; j <= m; j++) {
			matrix[i][j] = matrix[i - 1][j] + matrix[i][j - 1];
			if (matrix [i][j] > 999) {
				matrix [i][j] = matrix[i][j] % 1000;
			}
		}
	}

	fprintf (fp_out, "%d\n", matrix[m][m]);
	i = l;
	j = c;
	int count = 0;
	while (i > 0 || i <= m || j > 0 || j <= m) {
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
	for (i = 0; i < count; ++i) {
		fprintf (fp_out, "%d %d\n", L[i], C[i]);
	}
	free(L);
	free(C);
	fclose(fp_in);
	fclose(fp_out);
	return 0;
}
