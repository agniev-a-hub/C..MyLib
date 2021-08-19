
#include "ft_lib.h"

char *ft_strtrim(char const *s)
{
	int	i;
	int	len;
	char *string;

	if (s == NULL)
	{
		return (NULL);
	}

	len = ft_strlen(s);

	while (s[len - 1] == ' ' || s[len - 1] == '\t' || s[len - 1] == '\n')
	{
		len--;
	}

	i = (-1);

	while (s[++i] == ' ' || s[i] == '\t' || s[i] == '\n')
	{
		len--;
	}
	if (len <= 0)
	{
		len = 0;
	}

	string = (char*)malloc(sizeof(char) * (len + 1));

	if (string == NULL)
	{	
		return (NULL);
	}

	s = s + i;
	i = -1;

	while (++i < len)
	{
		string[i] = *s++;
	}

	string[i] = '\0';

	return (string);
}