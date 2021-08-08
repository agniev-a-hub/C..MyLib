#include "ft_lib.h"

char * ft_strjoin(char const * s1, char const * s2)
{
	unsigned int len1;
	unsigned int len2;
    char *s1s2;

	if (s1 == NULL || s2 == NULL)
    {
		return NULL;
    }

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);

	s1s2 = ft_strnew(len1 + len2);

	if (s1s2 == NULL)
    {
		return NULL;
    }

	s1s2 = ft_strcat(s1s2, s1);
	s1s2 = ft_strcat(s1s2, s2);
    
	return (s1s2);
}