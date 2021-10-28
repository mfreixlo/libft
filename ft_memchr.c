#include <stddef.h>

void *ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *r;
	int i;

	i = 0;
	r = (void *) s;
	while (*r && i < (int) n)
	{
		if (c == *r)
			return (r);
		r++;
		i++;
	}	
	return (NULL);	
}
