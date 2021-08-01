#include "ft_lib.h"

// int memcmp(const void *s1, const void *s2, size_t n);

// DESCRIPTION

// The memcmp() function compares the first n bytes (each
// interpreted as unsigned char) of the memory areas s1 and s2.

// RETURN VALUE

// The memcmp() function returns an integer less than, equal to, or
// greater than zero if the first n bytes of s1 is found,
// respectively, to be less than, to match, or be greater than the
// first n bytes of s2.

// For a nonzero return value, the sign is determined by the sign of
// the difference between the first pair of bytes (interpreted as
// unsigned char) that differ in s1 and s2.

// If n is zero, the return value is zero.


int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *buf1;
	unsigned char *buf2;
	buf1 = (unsigned char *)s1;
	buf2 = (unsigned char *)s2;

	if (s1 == s2 || n == 0)
    {
		return (0);
    }
	while (n--)
	{
		if (*buf1 != *buf2)
        {
			return (*buf1 - *buf2);
        }
		if (n != 0)
		{
			buf1++;
			buf2++;
		}
	}
	return (0);
}