#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_PRIMES 1240
#define PRIMESS_UNDER 10000

void SieveOfEratosthenes(int n, int *result) {
    _Bool prime[n+1]; 
    memset(prime, 1, sizeof(prime)); 
    int p = 0, i = 0;
    for (p = 2; p * p <= n; ++p) {
        if (prime[p] == 1) {
            for (i = p * p; i <= n; i += p) { 
                prime[i] = 0;
            }
        } 
    }

    i = 0;
    for (p = n; p >= 2; --p) {
        if (prime[p]) {
            result[i] = p;
            ++i;
        }
    }
}

_Bool hasDigits(int n, int d1, int d2) {
    while (n > 0) {
        if (n % 10 == d1 || n % 10 == d2) {
            return 1;
        }
        n = n / 10;
    }
    return 0;
}

int main () {
    FILE *fp_in, *fp_out;
    fp_in = fopen ("pin.in", "r");
    fp_out = fopen ("pin.out", "w");

    int k = 0, p = 0, i = 0, *res, fs = 0;
    res = malloc(MAX_PRIMES * sizeof(int));

    fs = fscanf (fp_in, "%d", &k);
    fs = fscanf (fp_in, "%d", &p);

    SieveOfEratosthenes(PRIMESS_UNDER, res);

    for (i = 0; i < MAX_PRIMES; ++i) {
        if (!hasDigits(res[i], k, p)) {
            fprintf (fp_out, "%d", res[i]);
            return 0;
        }
        
    }

    return 0;
}