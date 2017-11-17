#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	size_t	i;
	size_t	j;
	size_t	size;
	char	*d;

	size = ft_strlen(s1) + ft_strlen(s2);
	d = ft_strnew(size + 1);
	if (!d)
		return (NULL);
	while (s1[j])
		d[i++] = s1[j++];
	j = 0;
	while (s2[j])
		d[i++] = s2[j++];
	return (d)
}
