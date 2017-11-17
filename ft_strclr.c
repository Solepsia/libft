#include "libft.h"

void	ft_strclr(char *s)
{
	size_t	i;

	i = ft_strlen(s);
	while (i >= 0)
		s[i--] = '\0';
}
