#ifndef DEBUGGER_H
#define DEBUGGER_H

// include libraries

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

// exit Flags
#define BADESTFLAG 310
#define GOODFLAG 311
// debugger functions
void deb_printer(char *data, int type_of_data);
void ptorrent_deb(int flag);
void is_not_a_number(void);
void invalid_fractol_name(void);
void destroy_window_with_esc(void);
void destroy_window_with_close_button(void);
void init_error(void);
void error_under_creating_window_with_mlx(void);
void unknown_flag(void);
void types_swaper_null_param(void);

// pdeb torrent flags

#define IS_NOTANUMBER 130 // 13 == death , 0 flag
#define INVALID_FRRACTAL 131 // 13 == death , 1 flag
#define DESTROY_WWESCKEY 132 // 13 == death , 2 flag
#define DESTROY_WWCB 133 // 13 == death , 3 flag
#define MLX_INIT_ERROR 134 // 13 == death , 4 flag
#define ERROR_UCWWM 135 // 13 = death , 5 flag
#define UNKNOWN_FLAG 136 // 13 death , 6 flag
#define TYPES_SWAPER_NULL_P 137 // 13 == death , 7 flag
// file descriptors (FILTER ERRORS) 

#define PERROR_TO_OPENED_TTY 1
#define PDATA_TO_OPENED_TTY 2


#endif
