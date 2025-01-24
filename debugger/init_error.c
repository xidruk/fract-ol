#include "debugger.h"

void init_error(void)
{
    deb_printer("Bad Check <[134]> ? Error Detected Under Init MLX <X11 Server Connection Error > ... \nMemory Used are Freed ...\nProcess Dead ... ", (int)PERROR_TO_OPENED_TTY);
    exit(BADFLAG);
}