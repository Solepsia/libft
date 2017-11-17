#include "libft.h"

char	*ft_strmapi(const char *s, void (*f)(unsigned int, char))
{
	char	*d;
	size_t	i;

	i = 0;
	d = ft_strcpy(s);
	while (d[i] && s[i])
		d[i] = f(i, s[i++]);
	return (d);
}
