#include <stdio.h>
#include <math.h>

int number_of_digits (int n) {
	int c = 0;
	while (n != 0) {
		n /= 10;
		++c;
	}
	return c;
}

int main() {
	FILE *fp_in;
	FILE *fp_out;
	int first, last, st, dt, n_one, n_two;

	fp_in = fopen ("triplu.in", "r");
	fp_out = fopen ("triplu.out", "w");

	fscanf (fp_in, "%d", &first);
	fscanf (fp_in, "%d", &last);
	st = ((first * (int)pow (10, number_of_digits (last))) + last);
	dt = ((last * (int)pow (10, number_of_digits (first))) + first);
	if (st >= dt) {
		fprintf (fp_out, "%d", 3 * st);
	} else {
		fprintf (fp_out, "%d", 3 * dt);
	}
	fclose (fp_in);
	fclose (fp_out);

	return 0;

}
