#include "ft_lib.h"
// void * lib_memset(void *ptr, int x, size_t n);
//definition of lib_memset:
// ptr ==> Starting address of memory to be filled;
// x   ==> Value to be filled;
// n   ==> Number of bytes to be filled starting from ptr to be filled;
// initialize memory within allocated part of the memory only!;

void	*ft_memset(void *str, int c, size_t n)
{
	//cleate the size_t container for n;
	size_t static_len;
	static_len = n;
	//buffer for str
	char *a;
	a = (char *)str;
	if (static_len == 0)
	{
		return (str);
	}
	for (long unsigned i = 0; static_len > i; static_len--)
	{
		*a++ = (char)c;
	}

	return (str);
}
