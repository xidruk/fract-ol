#ifndef TYPES_SWAPER_H
#define TYPES_SWAPER_H

// includes 

#include "../debugger/debugger.h"
#include "../data_parsing/data_parsing.h"

// types flags

#define SWAP_TO_INT  969// swap a char to int
#define SWAP_TO_FLOAT  696// swap a char to float

// types swaper functions 
void types_swaper(char *data, int flag);
int c_to_int(char *data);
float c_to_float(char *data);

#endif
