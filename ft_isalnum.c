#include "ft_lib.h"

int ft_isalnum(int c)
{
    return ((ft_isalpha(c)) || (ft_isdigit(c)) ? 1 : 0);
}