#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*str;
	size_t	i;

	i = 0;
	if ((str = (char *)malloc(size)))
	{
		while (i < size)
			str[i++] = '\0';
		return (str);
	}
	else
		return (NULL);
}
