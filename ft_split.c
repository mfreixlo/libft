/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfreixo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 10:07:57 by mfreixo-          #+#    #+#             */
/*   Updated: 2021/11/03 12:26:18 by mfreixo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(char const *s, char c)
{
	int	i;

	i = 0;
	if (!s)
		return (0);
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s && *s != c)
		{
			s++;
			i++;
		}
		while (*s && *s != c)
			s++;
		if (*s && *s == c)
			continue ;
	}
	return (i);
}

static int	ft_slen(char const *str, int pos, char c)
{
	int	len;

	if (!str)
		return (0);
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

static int	ft_scpy(char const *s1, char *s2, int ind, int len)
{
	int	j;
	int	k;

	if (!s1 || !s2)
		return (0);
	k = 0;
	j = 0;
	while (j < len - 1)
		s2[j++] = s1[ind++];
	s2[j] = '\0';
	return (ind);
}

int	ft_next(char const *s, char c, int i)
{
	if (!s)
		return (0);
	while (s[i] && s[i] == c)
		i++;
	return (i);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	char	**split;
	int		k;

	i = 0;
	k = 0;
	if (!s)
		return (NULL);
	split = malloc (sizeof(char *) * (ft_count (s, c) + 1));
	if (!split)
		return (NULL);
	while (s[i])
	{
		i = ft_next(s, c, i);
		if (s[i] && s[i] != c)
		{
			split[k] = malloc(sizeof(char) * (ft_slen(s, i, c) + 1));
			if (!(split[k]))
				return (NULL);
			i = ft_scpy(s, split[k++], i, ft_slen(s, i, c) + 1);
		}
		continue ;
	}
	split[k] = NULL;
	return (split);
}
