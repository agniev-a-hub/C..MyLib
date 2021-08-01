#include "ft_lib.h"

// The memccpy() function copies no more than n bytes from memory
// area src to memory area dest, stopping when the character c is
// found.
// If the memory areas overlap, the results are undefined.
// void *memccpy(void *dst, const void *src, int c, size_t n);

void *ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t i;
	unsigned char *ma1;
	unsigned char *ma2;

	ma1 = (unsigned char*)dst;
	ma2 = (unsigned char*)src;
	i = 0;

	while (i < n)
	{
		ma1[i] = ma2[i];
		if (ma2[i] == (unsigned char)c)
		  return (ma1 + i + 1);
		i++;
	}
    // result undef;
	return (NULL);
}