#include "ft_lib.h"

void ft_striter(char *s, void (*f)(char *))
{
	if (s == NULL || f == NULL)
    {
		return ;
    }
	else 
    {
        while (*s)
        {
		    f(s++);
        }
    }
}
