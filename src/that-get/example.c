#include <stdio.h>
#include <stdlib.h>
#include "safe_input.h"

int main(void) {

    int aint;
    unsigned auint;
    char achar;
    float afloat;
    double adouble;
    char* astring;

    printf("Input integer: ");
    aint = get_int();
    printf("Your integer: %d\n", aint);

    printf("Input unsigned integer: ");
    auint = get_uint();
    printf("Your unsigned integer: %u\n", auint);

    printf("Input character: ");
    achar = get_char();
    printf("Your character: %c\n", achar);
    printf("Your character's code: %hhu\n", achar);

    printf("Input float: ");
    afloat = get_float();
    printf("Your float: %f\n", afloat);

    printf("Input double: ");
    adouble = get_double();
    printf("Your double: %lf\n", adouble);

    printf("Input string: ");
    astring = get_string();
    printf("Your string: %s\n", astring);

    free(astring);

    return 0;

}
