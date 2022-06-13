#include <stdio.h>
#include <math.h>

/* This program calculates e or Euler's Number by solving
 * limit((1 + 1/n)^n, n, inf), which is second wonderful limit
 * and equals to e or approximately 2.718281828...
 * This program takes n as 2^32 and calculates
 * 10 significant digits of e almost instantly. */

int main(void) {

    const unsigned precision = 32u;
    const long long unsigned llu_n = 1llu << precision;
    const double one = 1.0l;
    const double n = (double) llu_n;

    const double e = pow((one + one /n), n);

    printf("e = %.11lf\n"
           "              ^\n"
           "  10 significant digits are calculated correctly\n", e);

    return 0;

}
