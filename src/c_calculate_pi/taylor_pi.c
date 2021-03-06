#include <stdio.h>

/* This program calculates pi by expanding atan(1) to a Taylor series,
 * which is 1 - 1/3 + 1/5 - 1/7 + ... or sum((-1)^n/(2*n + 1), 0, N).
 * So as N gets bigger, this sum gets closer to pi / 4.
 * This program uses 2^34 as N and calculates 10 significant digits of pi
 * within approximately 40-50 seconds total */

int main (void) {

    const double four = 4.0l; /* multiplying every series member */
    const unsigned precision = 34u; /* means 2 ^ 34 operations */
    double pi = 0.0l;
    double sign = 1.0l;
    double denominator = 1.0l;
    long long unsigned operations = 1llu << precision;

    for (long long unsigned i = 0llu; i < operations; ++i) {
        pi += sign * (four / denominator);
        sign = -sign;
        denominator += 2.0l;
    }

    printf("pi = %.11lf\n"
           "               ^\n"
           "  10 significant digits are calculated correctly\n", pi);

    return 0;

}
