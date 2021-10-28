#include <stdlib.h>
#include <stdio.h>
#include "libft.h"
/*
static int ft_strlen(char *c)
{
	int len;

	len	= 0;
	while(*c)
	{
		len++;
		c++;
	}
	return (len);
}*/

char *ft_strjoin(char const *s1, char const *s2)
{
	char *str1;
	char *str2;
	char *str3;
	int i;
	int j;

	str1 = (char *) s1;
	str2 = (char *) s2;
	i = 0;
	j = 0;
	if(!(str3 = malloc(sizeof(char) * ((int)ft_strlen(str1) + (int)ft_strlen(str2)))))
		return (NULL);
	while (str1[i])
	{
		str3[i] = str1[j];
		i++;
		j++;
	}
	j = 0;
	while (str2[j])
	{
		str3[i] = str2[j];
		i++;
		j++;
	}
	str3[i] = '\0';
	return (str3); 
}
