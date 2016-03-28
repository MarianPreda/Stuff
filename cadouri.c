#include <stdio.h>
#include <stdlib.h>
int main () {
    int i, F, B, N, *c, cf = 0, cb = 0;
    FILE *fp_in, *fp_out;
    fp_in = fopen("cadouri.in", "r");
    fp_out = fopen("cadouri.out", "w");

    fscanf (fp_in, "%d", &F);
    fscanf (fp_in, "%d", &B);
    fscanf (fp_in, "%d", &N);
    c = malloc (N * sizeof(int));
    for (i = 0; i < N; i++) {
        fscanf (fp_in, "%d", &c[i]);
    }
    for (i = 0; i < N; i++) {
        if (c[i] % 2 == 0) {
            cf ++;
        } else
            if (c[i] % 2 == 1) {
                cb ++;
            }
    }
    if (cf < F) {
        fprintf (fp_out, "%d\n", F - cf);
    } else
        if (cf >= F) {
            fprintf (fp_out, "%d\n", 0);
        }
    if  (cb < B) {
        fprintf (fp_out, "%d", B - cb);
    } else
        if (cb >= B) {
            fprintf (fp_out, "%d", 0);
        }
    fclose(fp_in);
    fclose(fp_out);
    return 0;
}
