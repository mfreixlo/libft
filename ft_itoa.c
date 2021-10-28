#include <stdlib.h>

static int ft_numlen (int n)
{
	if (n < 0)
		return (ft_numlen(n * -1) + 1);
	if (n > 9)
		return (ft_numlen(n / 10) + 1);
	else
		return (1);
}

char *ft_itoa(int n)
{
	char *num;
	int k;
	int sign;

	if (n == -2147483648)
		return ("-2147483648");
	sign = 1;
	if (n < 0)
		sign = -1;
	k = ft_numlen(n) + 1;
	if (!(num = malloc(sizeof(char) * k)))
		return (NULL);
	k -= 1;
	num[k] = '\0';
	n *= sign;	
	while (--k >= 0)
	{
		if (k == 0 && sign == -1)
			num[k] = '-';
		else
		{
			num[k] = n % 10 + '0';
			n /= 10;
		}
	}
	return (num);
}
