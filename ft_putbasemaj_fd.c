#include "libft.h"

size_t	ft_putbasemaj_fd(int n, unsigned int base, int fd)
{
	if (base < 2)
		return (0);
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = -n;
	}
	if (n > base - 1)
	{
		ft_putbasemaj_fd(n / base, base, fd);
		ft_putbasemaj_fd(n % base, base, fd);
	}
	else
	{
		if (n > 9)
			ft_putchar_fd(n + 'A' - 10, fd);
		else
			ft_putchar_fd(n + '0', fd);
	}
	return (1);
}
