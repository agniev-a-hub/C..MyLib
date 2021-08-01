#include "ft_lib.h"

void *ft_memalloc(size_t size)
{
    //im not sure if it's correct to declare void;
    void * mspace;
    mspace = malloc(sizeof(size));
    if (mspace == NULL)
    {
        return NULL;
    }
    // my own func usage :D
    ft_memset(mspace, 0, size);
    return mspace;
}