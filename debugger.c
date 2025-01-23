#include "g_header.h"

// error 1 is not a number
// error 2 the malloc fails 

void printer(char *data)
{
    int _index;

    _index = 0;
    if (!data)
    {
        write(1, "no data given to print", 22);
    }
    while (data[_index])
    {
        write(1, &data[_index], 1);
        _index++;
    }
    write(1, "\n", 1);
}

void is_not_a_number(void)
{
    write(1, "Bad Check - IDF <[1]> ? the given parameter is not a number ? process killed\n", 76);
    exit (BADFLAG);
}
void invalid_fractol_name(void)
{
    printer("Error: Invalid fractal name. Please choose from: mandelbrot, julia, burningship, tricorn");
    exit(BADFLAG);
}
