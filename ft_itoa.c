#include "ft_lib.h"

static int space_check(char c)
{
	if (c == ' ' || c == '\r' || c == '\v')
    {
		return (1);
    }
	else if (c == '\t' || c == '\f' || c == '\n')
    {
		return (1);
    }
	return (0);
}

int ft_atoi(const char *str)
{
	unsigned long long res = 0;
	int	i = 0;
	int	sign;

	while (space_check(*str) != 0)
    {
		str++;
    }

	sign = ((*str == '-') ? -1 : 1);

	if (*str == '-' || *str == '+')
    {
		str++;
    }
	while (ft_isdigit(str[i]) != 0)
	{
		res = (res * 10 + (str[i] - '0'));
		i++;
	}
	if ((i > 19) || (res > 9223372036854775807))
	{
		if (sign == 1)
        {
			return (-1);
        }
		return (0);
	}
	return (int)(res * sign);
}