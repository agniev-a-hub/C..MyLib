#include "ft_lib.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
    if (s == NULL)
    {
        return NULL;
    }
	size_t	i;
	char *sub = malloc(sizeof(char) * (len + 1));
	if (sub == NULL)
    {
		return (NULL);
    }

	i = 0;
	while (i < len)
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = '\0';
    
	return sub;
}