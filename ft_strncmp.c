#include <stddef.h>
#include <stdio.h>

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int i;
	char *c1;
	char *c2;

	c1 = (char *) s1;
	c2 = (char *) s2;
	i = 0;
	while (*c1 && *c2 && *c1 == *c2 && i < (int) n)
	{
		c1++;
		c2++;
		i++;
	}
	if (i == (int) n)
		return (0);
	return (*c1 - *c2);
}
