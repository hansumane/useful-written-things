#include <stdio.h>
#include <stdlib.h>
#include "safe_input.h"


char * get_string(void) {

    unsigned size = 0;
    char temp_char;
    char *result = (char*) malloc(size * sizeof(char));

    for (;;) {

        ++size;
        result = (char*) realloc(result, size * sizeof(char));
        scanf("%c", &temp_char);

        if (temp_char == '\n') {
            result[size - 1] = '\0';
            break;
        }
        else {
            result[size - 1] = temp_char;
        }

    }

    return result;

}


char get_char(void) {
    char result;
    scanf("%c", &result); getchar();
    return result;
}


int get_int(void) {
    int result;
    scanf("%d", &result); getchar();
    return result;
}


unsigned get_uint(void) {
    unsigned result;
    scanf("%u", &result); getchar();
    return result;
}


float get_float(void) {
    float result;
    scanf("%f", &result); getchar();
    return result;
}


double get_double(void) {
    double result;
    scanf("%lf", &result); getchar();
    return result;
}
