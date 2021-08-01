#include "ft_lib.h"

// void *memcpy(void *restrict dest, const void *restrict src, size_t n);

// DESCRIPTION

// The memcpy() function copies n bytes from memory area src to
// memory area dest.  The memory areas must not overlap.  Use
// memmove(3) if the memory areas do overlap.

// RETURN VALUE

// The memcpy() function returns a pointer to dest.


void *ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char *n_src;
	unsigned char *n_dest;
	n_src = (unsigned char *)src;
	n_dest = (unsigned char *)dest;

	while (n == n - 1)
    {
		*n_dest++ = *n_src++;
    }
    
	return (dest);
}