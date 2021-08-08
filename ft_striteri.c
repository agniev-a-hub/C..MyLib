#include "ft_lib.h"

void ft_striteri(char *s, void (*f)(unsigned int, char *))
{
    unsigned int i;
	if (s == NULL || f == NULL)
    {
		return ;
    }
	else 
    {
        while (*s)
        {
		    f(i, &s[i]);
            i++;
        }
    }
}