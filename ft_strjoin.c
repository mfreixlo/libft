/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfreixo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 17:49:08 by mfreixo-          #+#    #+#             */
/*   Updated: 2021/11/03 10:05:30 by mfreixo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str3;
	int		i;
	int		j;

	if (!s1 || !s2)
		return (NULL);
	i = 0;
	j = 0;
	str3 = malloc(sizeof(char) * ((int)ft_strlen(s1) + (int)ft_strlen(s2)));
	if (!str3)
		return (NULL);
	while (s1[i])
	{
		str3[i++] = s1[j++];
	}
	j = 0;
	while (s2[j])
	{
		str3[i++] = s2[j++];
	}
	str3[i] = '\0';
	return (str3);
}
