#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *substr;
	int i;
	char *str;
	int j;

	j = (int) start;
	str = (char *)s;
	i = 0;
	if (j >= (int) len)
	{
		return (NULL);
	}
	substr = malloc(sizeof(char) * ((int)len - j));
	if (!substr)
		return (NULL);
	while (str[start] && i < (int)len)
	{
		substr[i] = str[start];
		start++;
		i++;
	}
	substr[start] = '\0';
	return (substr);
}
