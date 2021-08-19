#include "ft_lib.h"

void ft_lstdel(t_list **alst, void (*del)(void*, size_t))
{
	t_list	*list;
    t_list	*buffer;

	list = *alst;
	while (list != NULL)
	{
		buffer = list->next;
		del(list, list->content_size);
		list = buffer;
	}
	*alst = NULL;
	free(*alst);
}