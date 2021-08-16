#include "ft_lib.h"
// void *memmove(void *dest, const void *src, size_t n);

// The memmove() function copies n bytes from memory area src to
// memory area dest.  The memory areas may overlap: copying takes
// place as though the bytes in src are first copied into a
// temporary array that does not over6lap src or dest, and the bytes
// are then copied from the temporary array to dest.


void *ft_memmove(void *dest, const void *src, size_t n)
{
	if (dest == NULL)
	{
		return NULL;
	}
	if (src == NULL || n == 0)
	{
		return (dest);
	}
	char *buff1;
	char *buff2;
	size_t i = 0;
	buff1 = (char *)src;
	buff2 = (char *)dest;

	if (buff1 < buff2)
    {
		while ((int)(n--) >= 0)
			*(buff2 + n) = *(buff1 + n);
    }
	else
    {
		while (i < n)
		{
			*(buff2 + i) = *(buff1 + i);
			i++;
		}
    }
	return dest;
}