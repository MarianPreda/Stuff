#include <stdio.h>

int main() {
	FILE *fp_in = fopen("psp.in", "r");
	FILE *fp_out = fopen("psp.out", "w");

	int i, N, memory, cd_memory, installed = 0;

	fscanf (fp_in, "%d", &N);
	fscanf (fp_in, "%d", &memory);

	for (i = 0; i < N; i++) {
		fscanf (fp_in, "%d", &cd_memory);
		if (cd_memory <= memory) {
			installed++;
			memory -= cd_memory;
		}
	}

	fprintf (fp_out, "%d %d", installed, memory);

	fclose(fp_in);
	fclose(fp_out);
}
