#include "ft_lib.h"

void ft_lstiter(t_list * lst, void (*f)(t_list * elem))
{
	while (lst != NULL || lst != 0)
	{
		f(lst);
		lst = lst->next;
	}
}