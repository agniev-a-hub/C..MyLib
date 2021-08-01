#include "ft_lib.h"

//        char *strcat(char *restrict dest, const char *restrict src);
//        char *strncat(char *restrict dest, const char *restrict src, size_t n);

// DESCRIPTION
//        The strcat() function appends the src string to the dest string,
//        overwriting the terminating null byte ('\0') at the end of dest,
//        and then adds a terminating null byte.  The strings may not
//        overlap, and the dest string must have enough space for the
//        result.  If dest is not large enough, program behavior is
//        unpredictable; buff overruns are a favorite avenue for
//        attacking secure programs.

//        The strncat() function is similar, except that

//        *  it will use at most n bytes from src; and

//        *  src does not need to be null-terminated if it contains n or
//           more bytes.

//        As with strcat(), the resulting string in dest is always null-
//        terminated.

//        If src contains n or more bytes, strncat() writes n+1 bytes to
//        dest (n from src plus the terminating null byte).  Therefore, the
//        size of dest must be at least strlen(dest)+n+1.

char *ft_strcat(char *dest, const char *src)
{
    //null test
    if((dest == NULL) && (src == NULL))
    {
        return NULL;
    }

    char *buff = dest; 

    while(*buff != '\0')
    {
        buff++; //
    }

    while(*src != '\0')
    {
        *buff++ = *src++;
    }

    *buff = '\0';

    return dest;
}