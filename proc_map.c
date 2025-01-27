#include "g_header.h"
/*
:
Error Detected !
the arguments you pass to the program is invalid !
the Program is rendering a fractals on a window using mlx lib that connect to x11 server on linux to manage image buffers and x11 server protocols and more things ... !
how it works ? 
after run the make command run this =>
./fractol <the name of the fractal> + 2 additional parameters for julia
there are 3 fractals < Julia , Mandelbrot , Tricorn>
for Julia you should add two additional parameters the real number and the imaginary number for the equation .
Note => by default we use this values for julia => -0.7 0.27015
this is a list of the valid commands to run =>
./fractol Julia 
./fractol Julia <re_part> <im_part>
./fractol Mandelbrot
./fractol Tricorn
:
*/

void proc_map_printer(char *data_to_print)
{
    int _index;

    _index = 0;
    if (!data_to_print)
        return ;
    while (data_to_print[_index])
    {
        if (data_to_print[_index] == ':')
        {
            _index++;
            while (data_to_print[_index] && data_to_print[_index] != ':')
            {
                write(2, &data_to_print[_index], 1);
                _index++;
            }
            if (data_to_print[_index] == ':')
                break;
        }
        _index++;
    }
    write(2, "\n", 1);
}

void proc_map(void)
{
    char *buffer;
    int file_ds;
    ssize_t readed_bytes;

    file_ds = open("proc_map.c", O_RDONLY);
    if (file_ds < 0)
        invalid_file_descriptor();
    buffer = malloc((BUFFER_SIZE + 1) * sizeof(char));
    if (!buffer)
        buffer_allocation_faisl_with_fd(file_ds);
    readed_bytes = read(file_ds, buffer, (size_t)BUFFER_SIZE);
    if (readed_bytes < 0)
    {
        free(buffer);
        read_func_fails(file_ds);
    }
    buffer[BUFFER_SIZE] = '\0';
    proc_map_printer(buffer);
    free(buffer);
    close(file_ds);
}