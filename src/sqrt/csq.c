#include <stdio.h>
#include <math.h>


double sq(double n) {

    if (n < 0.0l) {
        return NAN;
    }

    else if (n == 0.0l) {
        return 0.0l;
    }

    else {
        double x = n;
        for (unsigned i = 0u; i < 24u; ++i)
            x = (x + n/x) / 2.0l;
        return x;
    }

}


int main(void) {

    double number, result, real;

    printf("Input number: ");
    scanf("%lf", &number); getchar();

    result = sq(number);
    real = sqrt(number);

    printf("using my func:    %.10lf\n", result);
    printf("using sqrt func:  %.10lf\n", real);

    return 0;

}
