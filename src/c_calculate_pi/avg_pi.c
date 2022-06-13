#include <stdio.h>
#include <math.h>

/* This program calculates pi by finding average of y = sqrt(1 - x^2)
 * in the [0, 1] range, which is actually pi / 4  | the proof is trivial :p
 * So as precision gets bigger, and step gets smaller,
 * average of sqrt(1 - x^2) gets closer to pi / 4.
 * This program uses 2^34 + 1 steps from 0 to 1,
 * and calculates 10 significant digits of pi within 40-50 seconds.
 * However, this is a very unefficient and slow method
 * to calculate pi, I designed it when I had no idea what
 * Taylor expansion is at all, nevertheless, it works, so... */

int main(void) {

    const double one = 1.0l, four = 4.0l;
    const double start = 0.0l, end = 1.0l;
    const long long unsigned precision = pow(2llu, 34llu);
    const long long unsigned amount = precision + 1llu;
    const double step = (end - start) / precision;
    double pi = 0.0l;

    for (double x = start; x <= end; x += step)
        pi += four * sqrt(one - x*x);

    pi /= amount;
    printf("pi = %.11lf\n"
           "               ^\n"
           "  10 significant digits are calculated correctly\n", pi);

    return 0;

}
