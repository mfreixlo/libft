#include <stdlib.h>
#include "libft.h"

char *ft_strdup(const char *s)
{
	char *p;
	char *s1;
	int len;
	int i;

	i = 0;
	len = (int)ft_strlen(s);	
	s1 = (char *) s;
	p = malloc(sizeof(char) * len); 
	if (!p)
			return (NULL);
	while (i < len)
	{
		*(p + i) = *(s1 + i);
		i++;
	}
	*(p + i) = '\0';
	return (p);
}
