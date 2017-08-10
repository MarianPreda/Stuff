#include <stdio.h>
#include <stdlib.h>

int cmmdc(int a, int b) {
	int p = a * b;
	while (a != b) {
		if (a > b) {
			a -= b;
		} else {
			b -= a;
		}
	}
	return a;
}

int main() {
	int M, N, L, min;
	FILE *fp_in, *fp_out;
    fp_in = fopen ("tort.in", "r");
    fp_out = fopen ("tort.out", "w");

    fscanf (fp_in, "%d", &M);
    fscanf (fp_in, "%d", &N);
    L = cmmdc (M, N);
    min = (M * N) / (L * L);

    fprintf(fp_out, "%d %d", min, L);

    fclose (fp_in);
    fclose (fp_out);
return 0;
}