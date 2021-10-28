/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfreixo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 16:13:37 by mfreixo-          #+#    #+#             */
/*   Updated: 2021/10/28 16:28:31 by mfreixo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(char *s, char c)
{
	int	i;

	i = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s != c)
		{
			s++;
			i++;
		}
		while (*s && *s != c)
			s++;
		if (*s == c)
			continue ;
	}
	return (i);
}

static int	ft_slen(char *str, int pos, char c)
{
	int	len;

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
/*
void ft_strcpy(int i, char const *s, char c, char **split, int k)
{

	int		len;
	int		j;
			
	len = ft_slen((char *)s, i, c) + 0;
	split[k] = malloc(sizeof(char) * len);
	if (!split[k])
		return ;
	j = 0;
	while (j < len - 1)
	{
		split[k][j++] = s[i++];
	}
	split[k++][j] = '\0';
}*/

char	**ft_split(char const *s, char c)
{
	int		i;
	char	**split;
	int		k;
	int		len;
	int		j;

	i = 0;
	k = 0;
	len = ft_count ((char *)s, c) + 1;
	split = malloc (sizeof(char *) * len);
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] != c)
			ft_strcpy(i, s, c, split, k);
		{
			len = ft_slen((char *)s, i, c) + 0;
			split[k] = malloc(sizeof(char) * len);
			if (!split[k])
				return (NULL);
		}
		j = 0;
		while (j < len - 1)
		{
			split[k][j++] = s[i++];
		}
		split[k++][j] = '\0';
		continue ;
	}
	split[k] = NULL;
	return (split);
}
