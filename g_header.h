#ifndef FRACT_OL_H
#define FRACT_OL_H

//===> libraries 
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "pflow_controller/debugger.h"
#include "data_parsing/data_parsing.h"
#include "types_swapper/types_swapper.h"
#include "fractal_torrent_manager/fractal_tm.h"
#include "validators/validators_h.h"
# include <math.h>
#include <string.h>
#include "mlx.h"
#include <fcntl.h>
//===> Macros
#define INT_MAX 2147483647
#define INT_MIN -2147483648
#define BUFFER_SIZE 99990

//===> parser functions
int matching_check(char *data_0, char *data_1);
int validate_number(char *data);

//==> proc_map function 
void proc_map(void);

//===> controlling fractals functions 
// int key_press(int keycode, fractal_wc *data);
// int close_window(fractal_wc *data);
// int window_center(int flag, fractal_wc *data);
// int fractals_base(t_fractal_wc *data, int argc, char **argv);
// void fractals_render(t_fractal_wc *data);
// int handle_keys(int keycode, t_fractal_wc *data);
// int handle_mouse(int button, int x, int y, t_fractal_wc *data);
// void set_pixel(t_fractal_wc *data, int x, int y, int color);
// int create_color(int r, int g, int b);
// void julia_set(t_fractal_wc *data);
// void mandelbrot_set(t_fractal_wc *data);
// void unique_set(t_fractal_wc *data);
// julia set functions


//===> sets flags
#define JULIA_SET 5509
#define MANDELBROT_SET 9055


#endif