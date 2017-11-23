#include "libft.h"

size_t	ft_putbasemaj(int n, unsigned int base)
{
	return(ft_putbasemaj_fd(n, base, 1));
}
