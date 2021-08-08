
#include "ft_lib.h"

size_t trim_len_func(char *s)
{
	int i = 0;
	size_t gap_len;
	size_t len;
	len = ft_strlen(s);

	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
	{
		i++;
	}

	gap_len = i;
	if (s[i] != '\0')
	{
		i = len - 1;

		while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		{
			i--;
			gap_len++;
		}
	}

	return (len - gap_len);
}

char *ft_strtrim(char const *s)
{
	char *string;
	size_t	a;
	size_t	b;
	size_t	trim_len;

	a = 0;
	b = 0;
	if (s == NULL)
		return (0);

	trim_len = trim_len_func((char *)s);

	string = (char *)malloc(sizeof(*string) * (trim_len + 1));

	if (string == NULL)
    {
		return (NULL);
    }

	while (s[a] == ' ' || s[a] == '\n' || s[a] == '\t')
    {
		a++;
    }
	while (b < trim_len)
	{
		string[b] = s[b];
		b++;
		a++;
	}
	string[b] = '\0';
	return (string);
}