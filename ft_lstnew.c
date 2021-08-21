#include "ft_lib.h"

t_list * ft_lstnew(void const * content, size_t content_size)
{
    //memory allocation for the pointer itself;
    t_list * new_list;
    new_list = (t_list*)malloc(sizeof(*new_list));
    if (new_list == (NULL))
    {
        return (NULL);
    }
    if (content == (NULL))
    {
        new_list->content = NULL;
        new_list->content_size = 0;
    }
    //memory allocation for the list item
    new_list->content = malloc(content_size);
    if (new_list->content == NULL)
    {
        free(new_list);
        return NULL;
        }
    else
    {
        ft_memcpy(new_list->content, content, content_size);
        new_list->content_size = content_size;
    }
    new_list->next = NULL;
    return new_list;
}
