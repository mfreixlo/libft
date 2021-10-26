#include <stdlib.h>
#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
	char *str1;
	char *str2;
	char *str3;
	int i;
	int ascii[128];
	int k;

	str1 = (char*) s1;
	str2 = (char *) set;
	str3 = malloc(sizeof(char) * (int)ft_strlen(str1));
	i = 0;
	k = 0;
	while (i < 127)
	{
		ascii[i] = 0;
		i++;
	}
	while (*str2)
	{
		ascii[(int)*str2]++;
		str2++;
	}
	i = 0;
	while (str1[i])
	{
		if (ascii[(int)str1[i]] != 0)
			i++;
		else
		{
			str3[k] = str1[i];
			k++;
			i++;
		}
	}
	return (str3);
}
