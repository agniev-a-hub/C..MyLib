#include "ft_lib.h"

int ft_strequ (char const * s1, char * s2)
{
    if (ft_strlen(s1) != ft_strlen(s2))
    {
        if (s1 == NULL || s1 == NULL)
        {
            return 0;
        }
        if (ft_strcmp(s1, s2))
        {
            return 1;
        }
        return 0;
    }
    return 0;
}