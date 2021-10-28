#include <stdlib.h>

static int ft_count (char *s, char c) //funcao que conta o numero de palavras separadas por c
{
	int i;

	i = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if(*s != c)
		{
			s++;
			i++;
		}
		while (*s && *s != c)
			s++;
		if(*s == c)
			continue;
	}
	return (i);
}

static int ft_slen (char *str, int pos, char c) //funcao que conta o tamanho da proxima palavra que se vai copiar
{
	int len;

	len = 0;
	while (str[pos] && str[pos] == c)
	{
		pos++;
	}
	while (str[pos] && str[pos] != c)
	{
		len++;
		pos++;
	}
	return (len);
}

char **ft_split (char const *s, char c)
{
	char *str;
	int i;
	char **split;
	int n;
	int k;
	int len;
	int j;

	i = 0;
	k = 0;
	str = (char *)s;
	n = ft_count (str, c) + 1;
	split = malloc (sizeof(char *) * n);
	while (str[i])
	{
		while (str[i] && str[i] == c)
			i++;
		if (str[i] != c)
		{
			len = ft_slen(str, i, c) + 1;
			if(!(split[k] = malloc(sizeof(char) * len)))
				return (NULL);
		}
		j = 0;
		while (j < len - 1)
		{
			split[k][j] = str[i];
			i++;
			j++;
		}
		split[k][j] = '\0';
		k++;
		continue;
	}
	split[k] = NULL;
	return (split);
}
