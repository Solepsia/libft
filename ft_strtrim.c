#include "libft.h"

char	*ft_strtrim(const char *s)
{
	size_t	i;
	size_t	start;
	size_t	end;
	char	*d;

	start = 0;
	i = 0;
	end = ft_strlen(s);
	while (ft_isspace(s[start]) && s[start])
		start++;
	while (ft_isspace(s[end]) && end >= 0)
		end--;
	d = ft_strnew(end - start + 2);
	if (!d)
		return (NULL);
	while (start + i <= end)
	{
		d[i] = s[start + i];
		i++;
	}
	return (d);
}
