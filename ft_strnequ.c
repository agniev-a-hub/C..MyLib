#include "ft_lib.h"

int ft_strnequ (char const * s1, char * s2, size_t n)
{
    unsigned int i = 0;

    if (ft_strlen(s1) == ft_strlen(s2))
    {
        if (s1 == NULL || s1 == NULL)
        {
            return 0;
        }
	    while ((unsigned char)s1[i] == (unsigned char)s2[i] &&
		(unsigned char)s1[i] != '\0' && (unsigned int)i <= (n - 1))
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