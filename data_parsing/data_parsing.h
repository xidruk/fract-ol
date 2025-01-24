#ifndef DATA_PARSING
#define DATA_PARSING

// includes 

#include "../debugger/debugger.h"

// data parsing functions 

int is_digit(char c);
int is_decimal_point(char c);
int is_minus_sign(char c);
int is_number(char c);
int has_valid_minus_sign(char *data);
int validate_is_float(char *data);
int check_the_stupid_bug(char *data);
int validate_number(char *data);

#endif
