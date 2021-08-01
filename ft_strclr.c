#include "ft_lib.h"

void ft_strclr (char *s)
{
    while (s != NULL && *s)
    {
        *s++ = '\0';
    }
}
