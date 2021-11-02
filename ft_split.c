/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfreixo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 10:07:57 by mfreixo-          #+#    #+#             */
/*   Updated: 2021/11/02 10:32:02 by mfreixo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(char const *s, char c)
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

static int	ft_slen(char const *str, int pos, char c)
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

static int	ft_scpy(char const *s1, char *s2, int ind, int len)
{
	int	j;
	int	k;

	k = 0;
	j = 0;
	while (j < len - 1)
		s2[j++] = s1[ind++];
	s2[j] = '\0';
	return (ind);
}

static void ft_del(char **str)
{
	if (!str)
		return ;
	while (*str)
	{
		free(*str);
		str++;
	}
	free (str);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	char	**split;
	int		k;
	int		len;

	i = 0;
	k = 0;
	split = malloc (sizeof(char *) * (ft_count (s, c) + 1));
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] != c)
		{
			len = ft_slen(s, i, c) + 1;
			split[k] = malloc(sizeof(char) * len);
			if (!(split[k]))
				ft_del(split);
			i = ft_scpy(s, split[k++], i, len);
		}
		continue ;
	}
	split[k] = NULL;
	return (split);
}
