#include "ft_lib.h"

//        #include <string.h>

//        char *strstr(const char *haystack, const char *needle);

//        #define _GNU_SOURCE         /* See feature_test_macros(7) */
//        #include <string.h>

//        char *strcasestr(const char *haystack, const char *needle);

// DESCRIPTION         top

//        The strstr() function finds the first occurrence of the substring
//        needle in the string haystack.  The terminating null bytes ('\0')
//        are not compared.

//        The strcasestr() function is like strstr(), but ignores the case
//        of both arguments.

// RETURN VALUE         top

//        These functions return a pointer to the beginning of the located
//        substring, or NULL if the substring is not found.

char *ft_strstr(const char *haystack, const char *needle)
{
    size_t n = ft_strlen(needle);

    while (*haystack != '\0')
    {
        if ((ft_memcmp(haystack, needle, n) == 0)) {
            return ((char*)(haystack));
        }
        haystack++;
    }
    return (NULL);
}