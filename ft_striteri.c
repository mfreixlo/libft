#include "libft.h"

void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int i;
	
	i = 0;
	if (!f)
		return;
	while (*s)	
	{
		(*f)(i, s);
		i++;
		s++;
	}
}
