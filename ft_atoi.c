#include <stdio.h>

static int ft_isspace(char c)
{
	if (c == ' ' || c == '\t' || c == '\n' || c == '\f' || c == '\v' || c == '\r')
		return (1);
	else
		return (0);
}

static int ft_isnum(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

int ft_atoi(const char *nptr)
{
	char *nmr;
	int sign;
	int n;

	n = 0;
	nmr = (char *) nptr;
	sign = 1;
	while (*nmr && ft_isspace(*nmr) == 1)
		nmr++;
	if (*nmr && *nmr == '-')
	{
		nmr++;
		sign = -1;
	}
	else if (*nmr && *nmr == '+')
	{
		sign = 1;
		nmr++;
	}
	while (*nmr && ft_isnum(*nmr) == 1)
	{
		n = n * 10 + (*nmr - '0');
		nmr++;
	}
	return (sign * n);
}
