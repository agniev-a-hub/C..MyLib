#include "ft_lib.h"

t_list *ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *result_list;
	t_list *list;

	if (!lst)
    {
		return (NULL);
    }

	list = f(lst);
	result_list = list;

	while (lst->next)
	{
		lst = lst->next;

		if (!(list->next = f(lst)))
		{
			free(list->next);
			return (NULL);
		}
		list = list->next;
	}
    
	return (result_list);
}