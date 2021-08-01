#include "ft_lib.h"

// char *strcpy(char *restrict dest, const char *src);
// char *strncpy(char *restrict dest, const char *restrict src, size_t n);

// DESCRIPTION  top

// The strcpy() function copies the string pointed to by src,
// including the terminating null byte ('\0'), to the buffer pointed
// to by dest.  The strings may not overlap, and the destination
// string dest must be large enough to receive the copy.  Beware of
// buffer overruns!  (See BUGS.)

// The strncpy() function is similar, except that at most n bytes of
// src are copied.  Warning: If there is no null byte among the
// first n bytes of src, the string placed in dest will not be null-
// terminated.

// If the length of src is less than n, strncpy() writes additional
// null bytes to dest to ensure that a total of n bytes are written.

// A simple implementation of strncpy() might be:

char *ft_strncpy(char * dest, const char * src, size_t n)
{
    
    size_t buf_n = 0;
	while (buf_n < n)
	{
		if (src[buf_n])
        {
			dest[buf_n] = src[buf_n];
        }
		else
        {
			while (buf_n < n)
			{
				dest[buf_n] = '\0';
				buf_n++;
			}
        }
		buf_n++;
	}
	return (dest);
}
