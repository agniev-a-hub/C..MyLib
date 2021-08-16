#include "ft_lib.h"

void ft_memdel(void **ap)
{
    if (*ap != NULL)
    {
        *ap = NULL;
        free(*ap);
    }
}