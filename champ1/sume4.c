#include <stdio.h>

int main() {
	int i, n, Ana, Maria, cartonas, mid, sum_Ana = 0, sum_Maria= 0;
	FILE *fp_in = fopen ("sume4.in", "r");
	FILE *fp_out = fopen ("sume4.out", "w");
	fscanf (fp_in, "%d", &n);
	for (i = 0; i < n; ++i) {
		fscanf(fp_in, "%d", &cartonas);
		Ana = cartonas / 1000;
		Maria = cartonas % 100;
		mid = (cartonas / 100) % 10;
		sum_Ana += Ana;
		sum_Maria += Maria;
		if (Ana > Maria) {
			sum_Maria += mid;
		} else if (Ana < Maria) {
			sum_Ana += mid;
			} else continue;
	}
	fprintf (fp_out, "%d %d", sum_Ana, sum_Maria);
	fclose(fp_in);
	fclose(fp_out);
	return 0;
}
