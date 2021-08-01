#include "ft_lib.h"

// char *strcpy(char *restrict dest, const char *src);


// DESCRIPTION

// The strcpy() function copies the string pointed to by src,
// including the terminating null byte ('\0'), to the buffer pointed
// to by dest.  The strings may not overlap, and the destination
// string dest must be large enough to receive the copy.  Beware of
// buffer overruns!  (See BUGS.)

char * ft_strcpy(char * dest, const char * src)
{
    if (dest == NULL) 
    {
        return NULL;
    }
    char * ptr = dest;
    while (* src != '\0')
    {
        * dest = * src;
        dest++;
        src++;
    }
    * dest = '\0';
    return ptr;
}