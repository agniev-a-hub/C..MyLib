#include "ft_lib.h"

static size_t strings_c(const char *s, char c)
{
	size_t	str_c;
	size_t	i;

	str_c = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if ((i == 0 || s[i - 1] == c) && s[i] != c)
			str_c++;
		i++;
	}
	return (str_c);
}

static size_t ft_wordlen(char const *s, char c)
{
	size_t i;

	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			s++;
			i++;
		}
		else
			return (i);
	}
	return (i);
}

char **ft_strsplit(char const *s, char c)
{
	char	**string_rdy;
	size_t	strings;
	size_t	word_len;
	size_t	i;
	size_t	n;

	i = 0;
	n = 0;
	strings = strings_c(s, c);
	string_rdy = (char **)malloc(sizeof(char *) * (strings + 1));
	while (n < strings && string_rdy)
	{
		while (s[i] != '\0' && s[i] == c)
			i++;
		word_len = ft_wordlen(&s[i], c);
		string_rdy[n] = malloc(sizeof(**string_rdy) * (word_len + 1));
		ft_strncpy(string_rdy[n], &s[i], word_len);
		string_rdy[n][word_len] = '\0';
		while (s[i] != '\0' && s[i] != c)
			i++;
		n++;
	}
	string_rdy[n] = NULL;
	return (string_rdy);
}
