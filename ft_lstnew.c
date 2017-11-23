#include "libft.h"

t_list	*ft_lstnew(const void *content, size_t content_size)
{
	t_list	*link;

	if (!(link = malloc(sizeof(t_list))))
		return (NULL);
	if (!content)
	{
		link->content = NULL;
		link->content_size = 0;
	}
	else
	{
		link->content = (void *)content;
		link->content_size = content_size;
	}
	link->next = NULL;
	return (link);
}
