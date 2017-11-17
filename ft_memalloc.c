#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*p;

	if ((p = malloc(size)))
		return (p);
	else
		return (NULL);
}
