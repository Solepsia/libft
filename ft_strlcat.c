#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	dest = ft_strncat(dest, src, size);
	while (src[i])
		i++;
	return (i + size);
}
