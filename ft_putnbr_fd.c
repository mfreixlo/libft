#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
	char c;

	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return;
	}
	if (n < 0)
	{
		c = '-';
		ft_putchar_fd(c, fd);
		ft_putnbr_fd(n * -1, fd);
	}
	else if (n > 10)
	{
		ft_putnbr_fd(n/10, fd);
		c = n % 10 + '0';
		ft_putchar_fd(c, fd);
	}
	else
	{
		c = n + '0';
		ft_putchar_fd(c, fd);
	}
}
