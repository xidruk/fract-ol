// #include "g_header.h"

// int validate_param(char *s1, char *s2)
// {
//     int  _index;

//     _index = 0;
//     while (s1[_index] && s2[_index])
//     {
//         if (s1[_index] != s2[_index])
//             return (0);
//         _index++;
//     }
//     return (1);
// }


// int check_julia_param(char **argv)
// {
//     int _index;

//     _index = 2; // set the index to 2 to make a offset between the julia param and the next param
//     while (argv[_index])
//     {
//         validate_number(argv[_index]);
//         printer(argv[_index]);
//         _index++;
//     }
//     return (1);
// }

// int main(int argc, char **argv)
// {
//     if (argc < 2)
//     {
//         printf("Usage: %s <argument>\n", argv[0]);
//         return 1;
//     }
    
//     if (validate_param(argv[1], "julia"))
//     {
//         printer("julia set ...");
//         check_julia_param(argv);
//     }
//     else if (validate_param(argv[1], "mandelbrot"))
//     {
//         printf("mandelbrotx1");
//     }
//     else
//         invalid_fractol_name();
//     return 0;
// }
