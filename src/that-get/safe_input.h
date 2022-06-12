#ifndef SAFE_INPUT_H
#define SAFE_INPUT_H


/* allows to input BUFSIZ - 1 characters.
 * BUFSIZ is a standard definition */
char * get_string_buf(void);

/* allows to input as many characters as possible,
 * but it is inefficient due to realloc on
 * every character input :p */
char * get_string_inf(void);

char get_char(void);

int get_int(void);

unsigned get_uint(void);

float get_float(void);

double get_double(void);


#endif
