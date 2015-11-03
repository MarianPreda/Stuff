#include <stdio.h>

int main() {
	int i, E, N, Nr, D;
	FILE *fp_in, *fp_out;
	fp_in = fopen("alo.in", "r");
	E = fscanf(fp_in, "%d", &E);
	N = fscanf(fp_in, "%d", &N);

//	for (i = 0; i < N; i++) {
		Nr = fscanf(fp_in, "%d", &Nr);
		D = fscanf(fp_in, "%d", &D);
		printf("%d", Nr);
		printf("%d", D);
		if (Nr % 10 == 5 && Nr/1000 == 2) {
			E += D;
		}
		if (Nr % 10 == 5 && Nr/1000 == 1) {
			E -= 2*D;
		}
//	}
	printf("%d\n", E);
}
