#include "debugger.h"

void invalid_fractol_name(void)
{
    deb_printer("Bad Check <[131]> ? Invalid Fractol Name ? <Argv[1]> RSLT : <PROCESS_DEATH>", (int)PERROR_TO_OPENED_TTY);
    exit(BADFLAG);
}