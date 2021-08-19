#include "ft_lib.h"

int ft_isprint(int c)
{
    int a = 0;
    if (c > 31 && c<127)
    {
        a++;
    }
    else
    {
        a = 0;
    }
    if((char)c == '\0')
    {
        a = 0;
    }
    return a;
}