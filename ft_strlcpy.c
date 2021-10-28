#include <stddef.h>

size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t i;
	
	i = 0;
	while (*src && i < size - 1)
	{
		*dst = *src;
		dst++;
		src++;
		i++;
	}
	*dst = '\0';
	while (*src)
	{
		i++;
		src++;
	}
	return (i);
}
