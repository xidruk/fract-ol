#include "debugger.h"


void unknown_flag(void)
{
    deb_printer("Unknown Flag ... \nProcess Killed ...", (int)PERROR_TO_OPENED_TTY);
    exit(BADFLAG);
}