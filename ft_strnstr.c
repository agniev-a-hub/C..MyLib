#include "ft_lib.h"

// char * strnstr(const char *big, const char *little, size_t len)

char * ft_strnstr(const char *big, const char *little, size_t n)
{
    char *p = ((char*)big);
    char *pEnd = ((char*)big)+n;
    size_t little_len = ft_strlen(little);

    if(0 == little_len)
        return ((char*)big);

    pEnd -= (little_len - 1);
    for(;p < pEnd; ++p)
    {
        if(0 == ft_strncmp(p, little, little_len))
            return ((char*)big);
    }
    return (NULL);
}