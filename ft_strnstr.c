#include <stddef.h>
#include <stdio.h>

char *ft_strnstr(const char *big, const char *little, size_t len)
{
	char *s;
	int i;
	int j;
	int k;
	char *l;

	s = (char *)big;
	l = (char *)little;
	i = 0;
	if (!(*l))
		return (s);
	while (s[i] && i < (int) len)
	{
		if (s[i] == l[0])
		{
			k = i;
			j = 0;
			while (*(s + k) && *(l + j) && s[k] == l[j] && k < (int) len)
			{
				k++;
				j++;
			}
			if (l[j] == '\0')
				return (s + i);
			else
				i++;
		}
		i++;
	}
	return (NULL);
}
