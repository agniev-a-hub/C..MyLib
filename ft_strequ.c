#include "ft_lib.h"

int ft_strequ (char const * s1, char * s2)
{
    unsigned int i = 0;

    if (ft_strlen(s1) != ft_strlen(s2))
    {
        if (s1 == NULL || s1 == NULL)
        {
            return 0;
        }
        while (s1[i] == s2[i])
        {
		    i++;
        }
        if (((unsigned char)s1[i] - (unsigned char)s2[i]) == 0)
        {
	        return 1;
        }
        else
        {
            return 0;
        }
    }
        return 0;
}