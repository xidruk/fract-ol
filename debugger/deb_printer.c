#include "debugger.h"

void deb_printer(char *data, int type_of_data)
{
    int _index;

    _index = 0;
    if (!data)
    {
        write((int)PERROR_TO_OPENED_TTY, "No Data Given To Print \n", 24);
    }
    if (type_of_data == (int)PERROR_TO_OPENED_TTY)
    {
        while (data[_index])
        {
            write((int)PERROR_TO_OPENED_TTY, &data[_index], 1);
            _index++;
        }
        write((int)PERROR_TO_OPENED_TTY, "\n", 1);
    }
    if (type_of_data == (int)PDATA_TO_OPENED_TTY)
    {
        while (data[_index])
        {
            write((int)PDATA_TO_OPENED_TTY, &data[_index], 1);
            _index++;
        }
        write((int)PDATA_TO_OPENED_TTY, "\n", 1);
    }
}