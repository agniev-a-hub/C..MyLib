#include "ft_lib.h"

void ft_strdel(char **as)
{
    if (as == NULL)
    {
        return ;
    }
    if( *as == NULL)
    {
        return ;
    }
    else
    {
        free(*as);
    }
    *as = NULL;
}