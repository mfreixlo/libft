#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char *str;
	int len;
	int j;

	len = (int) ft_strlen(s) + 1;
	if (!(str = malloc(sizeof(char) * len)))
		return (NULL);
	j = 0;
	while (s[j])
	{
		str[j] =  f(j, s[j]);
		j++;
	}
	str[j] = '\0';
	return (str);
}
