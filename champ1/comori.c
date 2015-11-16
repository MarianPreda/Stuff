#include <stdio.h>

int main() {
    int i, x = 0, y = 0, d, p, N;
	scanf ("%d", &N);
	for (i = 0; i < N; ++i) {
		scanf("%d", &d);
		scanf("%d", &p);

		if (d == 1) {
			y += p;
		}
		if (d == 2) {
			x += p;
			y += p;
		}
		if (d == 3) {
			x += p;
		}
		if (d == 4) {
			x += p;
			y -= p;
		}
		if (d == 5) {
			y -= p;
		}
		if (d == 6) {
			x -= p;
			y -= p;
		}
		if (d == 7) {
			x -= p;
		}
		if (d == 8) {
			x -= p;
			y += p;
		}
	}
	printf ("%d %d", x, y);
	return 0;
}
