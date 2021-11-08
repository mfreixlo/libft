/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfreixo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 17:45:29 by mfreixo-          #+#    #+#             */
/*   Updated: 2021/11/03 10:07:11 by mfreixo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_cut(char const *s1, int k, int ascii[128])
{
	int	state;
	int	cut;

	state = 1;
	if (k == 0)
		state = 0;
	cut = 0;
	while (s1[k] && k >= 0)
	{
		if (ascii[(int)s1[k]] != 0)
		{
			if (state == 1)
				k--;
			else
				k++;
		}
		else
			return (k);
	}
	return (k);
}

void	ft_ascii(const char *set, int ascii[128])
{
	int	i;

	i = 0;
	while (i < 127)
	{
		ascii[i] = 0;
		i++;
	}
	while (*set)
	{
		ascii[(int)*set]++;
		set++;
	}
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str3;
	int		ascii[128];
	int		len;
	int		start;
	int		end;

	if (!s1 || !set)
		return (0);
	len = (int)ft_strlen(s1);
	ft_ascii(set, ascii);
	start = ft_cut(s1, 0, ascii);
	end = ft_cut(s1, len - 1, ascii);
	if (start > end)
		len = 0;
	else
		len = end - start;
	str3 = malloc(sizeof(char) * (len + 2));
	if (!str3)
		return (0);
	len = 0;
	while (s1[start] && start <= end)
		str3[len++] = s1[start++];
	str3[len] = '\0';
	return (str3);
}
