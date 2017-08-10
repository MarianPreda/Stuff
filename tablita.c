#include <stdio.h>
#include <stdlib.h>

int main() {
	int ok = 0, i, count = 1, count2 = 1, cautat;
	FILE *fp_in, *fp_out;
    fp_in = fopen ("tablita.in", "r");
    fp_out = fopen ("tablita.out", "w");

    fscanf (fp_in, "%d", &cautat);

    while (count2 != cautat) {
    	for (i = 1; i <= count; ++i) {
    		count2++;
    	   	if (count2 == cautat) {
    			ok = 1;
    			break;
    		}
    	}
    	if (ok == 1) {
    		fprintf(fp_out, "%d", count);
    		break;
    	}
    	count++;
    }
    fclose (fp_in);
    fclose (fp_out);
	return 0;
}