#include <stdio.h>

int main() {
	int a, b, produs;

	printf ("a=");
	scanf ("%d", &a);
	printf ("b=");
	scanf ("%d", &b);
	produs = a * b;
	while (a != b) {
		if (a > b) {
			a -= b;
		} else {
			b -= a;
		}
	}

	printf ("cmmdc al numerelor este: %d\n"
			"cmmmc al numerelor este: %d\n", a, produs/a);
	return 0;
}
