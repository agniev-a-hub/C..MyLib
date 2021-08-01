#include "ft_lib.h"

char * ft_strnew(size_t size)
{
    char * string = malloc(size + 1);
    if (!string)
    {
        return NULL;
    }
    ft_memset(string, '\0', size);

    return ((char *)string);
}
