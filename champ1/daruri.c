#include <stdio.h>

int cmmdc (a, b) {
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
	int T, L, numar_pachete;
	FILE *fp_in, *fp_out;
	fp_in = fopen("daruri.in", "r");
	fp_out = fopen("daruri.out", "w");

	fscanf (fp_in, "%d", &T);
	fscanf (fp_in, "%d", &L);

	numar_pachete = cmmdc (T, L);
	if (numar_pachete != 1) {
		fprintf (fp_out, "%d\n%d %d", numar_pachete, T/numar_pachete,
				L/numar_pachete);
	} else {
		fprintf (fp_out, "%d\n%d %d", 0, 0, 0);
	}
	return 0;
}
