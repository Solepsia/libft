#include "libft.h"

char	*ft_strmap(const char *s, void (*f)(char))
{
	char	*d;
	size_t	i;

	i = 0;
	d = ft_strcpy(s);
	while (d[i] && s[i])
		d[i] = f(s[i++]);
	return (d);
}
