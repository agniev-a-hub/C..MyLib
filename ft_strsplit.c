#include "ft_lib.h"

int	ft_strsize(char *s, char c);
int	ft_len(char *s, char c, int point);
char *plus_str(char *s, char *s2, char c, int point);
char **plus_tab(char **str, char *s, char c, int point);

char **ft_strsplit(char const *s, char c)
{
	char **str;
	int	 size;
	int	 i = 0;

	if (s)
	{
		size = ft_strsize((char *)s, c);
		str = (char **)malloc(sizeof(char *) * (size + 1));
		i = 0;
		if (str != NULL)
		{
			while (s[i] == c && s[i])
				i++;
			str = plus_tab(str, (char *)s, c, i);
			return (str);
		}
		return (NULL);
	}
	return (NULL);
}
int	ft_strsize(char *s, char c)
{
	int	 size = 0;
	int	 pointer = 0;

	while (s[pointer])
	{
		if (s[pointer] == c)
        {
			pointer++;
        }
		while (s[pointer] != c && s[pointer])
		{
			size++;
			pointer++;
		}
	}
	return (size);
}

int	ft_len(char *s, char c, int point)
{
	int	 len = 0;

	while (s[point] != c && s[point])
	{
		len++;
		point++;
	}

	return (len);
}

char *plus_str(char *s, char *s2, char c, int point)
{
	int	 i = 0;

	while (s[point] && (s[point] != c))
	{
		s2[i] = s[point];
		i++;
		point++;
	}
	s2[i] = '\0';
	return (s2);
}

char **plus_tab(char **str, char *s, char c, int point)
{
	int	len;
	int	i = point;
	int	f = 0;

	while (s[i])
	{
		len = ft_len(s, c, point);
		str[f] = (char *)malloc(sizeof(char) * (len + 1));
		if (str[f])
		{
			str[f] = plus_str(s, str[f], c, point);
			f++;
			i = (i + ft_len(s, c, point));
			while (s[i] == c && s[i])
            {
				i++;
            }
			point = i;
		}
		else
        {
			return (NULL);
        }
	}
	str[f] = 0;
	return (str);
}
