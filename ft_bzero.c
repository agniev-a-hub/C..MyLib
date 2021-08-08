#include "ft_lib.h"

// The bzero() function erases the data in the n bytes of the memory
// starting at the location pointed to by s, by writing zeros (bytes
// containing '\0') to that area.

// The explicit_bzero() function performs the same task as bzero().
// It differs from bzero() in that it guarantees that compiler
// optimizations will not remove the erase operation if the compiler
// deduces that the operation is "unnecessary".

// void bzero(void *s, size_t n);

void ft_bzero(void *s, size_t n)
{
	unsigned char *str;
	size_t len;

	len = n;
	if (len == 0)
	{
		return ;
	}
	str = (unsigned char *)s;
	for (;len > 0; len--)
	{
		*str++ = 0;
	}
}