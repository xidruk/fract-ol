#ifndef FRACT_OL_H
#define FRACT_OL_H

//===> libraries 
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "debugger/debugger.h"

//===> Macros
#define INT_MAX 2147483647
#define INT_MIN -2147483648
// Define window tools
#define W_WIDTH 1500
#define W_HEIGHT 1000

// Key press codes 
#define ESC_KEYCODE 65307


//===> structs
typedef struct s_mlx_data {
    void *mlx;
    void *win;
} t_mlx_data;


//===> parser functions
int validate_param(char *s1, char *s2);
int validate_number(char *data);


//===> controlling functions 
int key_press(int keycode, t_mlx_data *data);
int close_window(t_mlx_data *data);
int window_center(int flag, t_mlx_data *data);

// julia set functions


//===> exit function flags
#define BADFLAG 1
#define SUCFLAG 0

//===> sets flags
#define JULIA_SET 5509
#define MANDELBROT_SET 9055


//===> controlling flags
#define CREATE_WINDOW 101
#define CLOSE_WINDOW 102

#endif
