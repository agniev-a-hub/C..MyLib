#include "ft_lib.h"

void ft_striteri(char *s, void (*f)(unsigned int, char *))
{
    int		i;
	int		i2;

	i = 0;
	i2 = 0;
    
	if (s != NULL && f != NULL)
	{
		i = ft_strlen(s);
		while (i2 < i)
		{
			(*f)(i2, s);
			s++;
			i2++;
		}
	}
}