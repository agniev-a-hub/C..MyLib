#include "ft_lib.h"

char *ft_strmap (const char *s, char (*f)(char))
{
    int i = 0;
    if (s == NULL || f == NULL)
    {
        return NULL;
    }
    int len = (ft_strlen(s)+1);
    char * resulting = malloc(len);
    if (resulting == NULL)
    {
        return NULL;
    }
    ft_strcpy(resulting, s);
    while (resulting[i])
    {
        resulting[i] = f(s[i]);
        i++;
    }
    resulting[i] = '\0';
    return resulting;
}
