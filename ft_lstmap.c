#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *))
{
	t_list	*dest;
	t_list	*tmp;

	dest = NULL;
	tmp = f(lst);
	dest = tmp;
	while (lst->next)
	{
		tmp->next = f(lst->next);
		tmp = tmp->next;
		lst = lst->next;
	}
	return (dest);
}
