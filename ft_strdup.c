#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*dest;
	int		i;

	i = 0;
	if ((dest = (char *)malloc(sizeof(char) * (ft_strlen(str) + 1))))
	{
		while (str[i])
		{
			dest[i] = str[i];
			i++;
		}
		dest[i] = '\0';
		return (dest);
	}
	else
		return (NULL);
}
