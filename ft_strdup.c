#include "ft_lib.h"

// The strdup() function returns a pointer to a new string which is
// a duplicate of the string s.  Memory for the new string is
// obtained with malloc(3), and can be freed with free(3).
// char *strdup(const char *s);

char *ft_strdup(const char *s)
{
    int s_size;
    static char * dup;
    char * dup_offset;
    s_size = ft_strlen(s);
    dup = (char *)malloc(sizeof(char)*s_size+1);
    if( dup == NULL)
    {
        return( (char *)NULL);
    }
    dup_offset = dup;
    while(*s)
    {
        *dup_offset = *s;
        dup_offset++;
        s++;
    }
    *dup_offset = '\0';
    return(dup);
}