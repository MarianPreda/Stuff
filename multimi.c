#include <stdio.h>

int main() {
	FILE *fp_in;
	FILE *fp_out;

	int n, i, left_val, right_val, lp = 0, rp = 30001;
	fp_in = fopen ("multimi.in", "r");
	fp_out = fopen ("multimi.out", "w");

	fscanf (fp_in, "%d", &n);

	for (i = 0; i < 2 * n; ++i) {
		if (i % 2 == 0) {
			fscanf (fp_in, "%d", &left_val);
			if (left_val > lp) {
				lp = left_val;
			}
		}else {
			fscanf (fp_in, "%d", &right_val);
			if (right_val < rp) {
				rp = right_val;
			}
		}
	}
	if (lp > rp) {
		fprintf (fp_out, "multimea vida");
	} else {
		for (i = lp; i < rp; ++i) {
			fprintf (fp_out, "%d ", i);
		}
		fprintf (fp_out, "%d", rp);
	}
	fclose(fp_in);
	fclose(fp_out);
}
