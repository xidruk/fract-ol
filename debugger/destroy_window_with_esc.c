#include "debugger.h"

void destroy_window_with_esc(void)
{
    deb_printer("Good Flag <[132]> ? Destroy Window Using ESC Key ...\nFree Used Memory \nKill Process ...", (int)PDATA_TO_OPENED_TTY);
    exit(GOODFLAG);
}