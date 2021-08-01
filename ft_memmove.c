#include "ft_lib.h"
// void *memmove(void *dest, const void *src, size_t n);

// The memmove() function copies n bytes from memory area src to
// memory area dest.  The memory areas may overlap: copying takes
// place as though the bytes in src are first copied into a
// temporary array that does not overlap src or dest, and the bytes
// are then copied from the temporary array to dest.


void *ft_memmove(void *dest, const void *src, size_t n)
{
	char *str1;
	char *str2;
	size_t i;
	i = 0;
	str1 = (char *)src;
	str2 = (char *)dest;

	if (str1 < str2)
    {
		while ((int)(n--) >= 0)
			*(str2 + n) = *(str1 + n);
    }
	else
    {
		while (i < n)
		{
			*(str2 + i) = *(str1 + i);
			i++;
		}
    }
	return (dest);
}