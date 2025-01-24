#include "debugger.h"


void error_under_creating_window_with_mlx(void)
{
    deb_printer("Bad Flag <[135]> ? Error Under Create A Window With MLX lib ...  \nUsed Memory Are Freed ...\nProcess Dead ...", (int)PERROR_TO_OPENED_TTY);
    exit(BADFLAG);
}