#include "ft_lib.h"

void ft_memdel(void **ap)
{
    if (*ap != NULL)
    {
        free(*ap);
        *ap = NULL;
    }
    else
    {
        ;
    }
}