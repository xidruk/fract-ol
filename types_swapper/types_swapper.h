#ifndef TYPES_SWAPER_H
#define TYPES_SWAPER_H

// includes 

#include "../debugger/debugger.h"
#include "../data_parsing/data_parsing.h"

// types flags

#define SWAP_TO_CINT  // swap a char to int
#define SWAP_TO_CFLOAT // swap a char to float

// types swaper functions 
int types_swaper(char *data, int flag);

#endif
