#include "libft.h"

char	*ft_strsub(const char *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*d;

	i = 0;
	d = ft_strnew(len);
	while (i < len && s[start + i])
	{
		d[i] = s[start + i];
		i++;
	}
	return (d);
}
