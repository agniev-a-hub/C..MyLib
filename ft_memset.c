#include "ft_lib.h"
// void * lib_memset(void *ptr, int x, size_t n);
//definition of lib_memset:
// ptr ==> Starting address of memory to be filled;
// x   ==> Value to be filled;
// n   ==> Number of bytes to be filled starting from ptr to be filled;

void	*ft_memset(void *str, int c, size_t n)
{

	unsigned char *a;
	size_t static_len;
	static_len = n;

	if (static_len == 0)
	{
		return (str);
	}
	
	a = (unsigned char *)str;

	while (static_len-- > 0)
	{
		*a++ = (unsigned char)c;
	}

	return (str);
}
