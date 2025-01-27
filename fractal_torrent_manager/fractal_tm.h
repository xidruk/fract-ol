#ifndef FRACTAL_TORRENT_H
#define FRACTAL_TORRENT_H

#include <stdlib.h>  // For exit()
#include <math.h>    // For math functions like sin() and cos()
#include "mlx.h"     // MiniLibX functions
#include "../pflow_controller/debugger.h"

// Define window tools
#define W_WIDTH 1500
#define W_HEIGHT 1000

//===> Key press codes 
// $1 : ESC key
#define ESC_KEYCODE 65307
// $2 : Arrow Keys
#define KEY_LEFT 65361
#define KEY_RIGHT 65363
#define KEY_UP 65362
#define KEY_DOWN 65364
// $3 : Edit Iteration
#define KEY_PLUS 65451
#define KEY_MINUS 65453

//===> Define Fractals 
# define JULIA       3330
# define MANDELBROT  3033
#define Tricorn 3303


// ===> Mouse 
#define MOUSE_SCROLL_UP 4
#define MOUSE_SCROLL_DOWN 5

typedef struct s_fractal_wc {
    void    *mlx;           // MiniLibX instance
    void    *win;           // Window instance
    void    *img;           // Image buffer
    char    *addr;          // Pixel buffer address
    int     bits_per_pixel; // Image bits per pixel
    int     line_length;    // Image line length
    int     endian;         // Image endianness
    int     fractal_type;   // Type of fractal (JULIA or MANDELBROT)
    double  zoom;           // Zoom level
    double  x_offset;       // Horizontal pan
    double  y_offset;       // Vertical pan
    double  julia_re;       // Julia real parameter
    double  julia_im;       // Julia imaginary parameter
    int     max_iter;       // Maximum iterations
} t_fractal_wc;


//===> Controlling window  Functions 
void init_mlx_connection_to_X11(t_fractal_wc *data);
int handle_mouse(int button, int x, int y, t_fractal_wc *data);
int handle_keys(int keycode, t_fractal_wc *data);
int handle_close(t_fractal_wc *data);

//==> rendring functions 
void fractals_render(t_fractal_wc *data);
void set_pixel(t_fractal_wc *data, int x, int y, int color);
int create_color(int r, int g, int b);
//===> stes functions 
void julia_set(t_fractal_wc *data);
void mandelbrot_set(t_fractal_wc *data);
void unique_set(t_fractal_wc *data);
#endif
