#include "ft_lib.h"

int ft_isascii(int ch)
{
    if ((ch <= 127) && (ch >= 0))
    {
        return 1;
    }
    else{
        return 0;
    }
}