#include "ft_lib.h"

static char	*ft_array(char *x, unsigned int numb, long int len)
{
	while (numb > 0)
	{
		x[len--] = 48 + (numb % 10);
		numb = numb / 10;
	}
	return (x);
}

static long int	ft_len(int n)
{
	int					len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n != 0)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

char *ft_itoa(int n)
{
	char *x;
	long int len;
	unsigned int numb;
	int sign;

	sign = 1;
	len = ft_len(n);
	x = (char *)malloc(sizeof(char) * (len + 1));
	if (!(x))
		return (NULL);
	x[len--] = '\0';
	if (n == 0)
		x[0] = '0';
	if (n < 0)
	{
		sign *= -1;
		numb = n * -1;
		x[0] = '-';
	}
	else
		numb = n;
	x = ft_array(x, numb, len);
	return (x);
}


