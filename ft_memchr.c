#include "ft_lib.h"

// void *memchr(const void *s, int c, size_t n);
// The functionality described on this reference page is aligned
// with the ISO C standard. Any conflict between the requirements
// described here and the ISO C standard is unintentional. This
// volume of POSIX.1‐2017 defers to the ISO C standard.
// The memchr() function shall locate the first occurrence of c
// (converted to an unsigned char) in the initial n bytes (each
// interpreted as unsigned char) pointed to by s.
// Implementations shall behave as if they read the memory byte by
// byte from the beginning of the bytes pointed to by s and stop at
// the first occurrence of c (if it is found in the initial n
// bytes).

void *ft_memchr(const void *s, int c, size_t n)
{
	size_t i;
	i = 0;

	while (i < n)
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
			return ((void*)s + i);
		i++;
	}
    
	return (NULL);
}