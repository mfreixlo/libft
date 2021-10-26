#include <stddef.h>

size_t ft_strlen(const char *s)
{
	size_t i;
	i = 0;

	while (*s)
	{
		i++;
		s++;
	}
	return i;
}
