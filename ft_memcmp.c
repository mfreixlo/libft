#include <stddef.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int i;
	unsigned char *c1;
	unsigned char *c2;

	c1 = (unsigned char *) s1;
	c2 = (unsigned char *) s2;
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
