#include <stdio.h>
#include <stdlib.h>
int main () {
    FILE *fp_in, *fp_out;
    fp_in = fopen ("bancomat.in", "r");
    fp_out = fopen ("bancomat.out", "w");
    int i, S, n, *codes;
    fscanf (fp_in, "%d", &S);
    fscanf (fp_in, "%d", &n);
    codes = malloc (n * sizeof(int));
    for (i = 0; i < n; i++) {
        fscanf (fp_in, "%d", &codes[i]);
    }
    for (i = 0; i < n; i++) {
        if (codes[i] % 10 == 2) {
            S += codes[i] / 10;
        } else
            if (codes[i] % 10 == 3 && codes[i] / 10 < S) {
                S -= codes[i]/10;
            }
    }
    fprintf (fp_out, "%d", S);
    fclose (fp_in);
    fclose (fp_out);
    return 0;
}
