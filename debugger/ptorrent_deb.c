#include "debugger.h"


// ptorrent_deb == program torrent debugger

void ptorrent_deb(int flag)
{
    if (flag == (int)IS_NOTANUMBER)
        is_not_a_number();
    else if (flag == (int)INVALID_FRRACTAL)
        invalid_fractol_name();
    else if (flag == (int)DESTROY_WWESCKEY)
        destroy_window_with_esc();
    else if (flag == (int)DESTROY_WWCB)
        destroy_window_with_close_button();
    else if (flag == (int)MLX_INIT_ERROR)
        init_error();
    else if (flag == (int)ERROR_UCWWM)
        error_under_creating_window_with_mlx();
    else if (flag == (int)UNKNOWN_FLAG)
        unknown_flag();
    
}