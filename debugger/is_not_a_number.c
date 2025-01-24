#include "debugger.h"

void is_not_a_number(void)
{
    deb_printer("Bad Check <[130]> ? The Given Param Is Not a Number > RSLT : <PROCESS_DEATH>", (int)PERROR_TO_OPENED_TTY);
    exit (BADFLAG);
}