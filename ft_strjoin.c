/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfreixo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 17:49:08 by mfreixo-          #+#    #+#             */
/*   Updated: 2021/10/29 17:59:26 by mfreixo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str1;
	char	*str2;
	char	*str3;
	int		i;
	int		j;

	str1 = (char *) s1;
	str2 = (char *) s2;
	i = 0;
	j = 0;
	str3 = malloc(sizeof(char) * ((int)ft_strlen(str1) + (int)ft_strlen(str2)));
	if (!str3)
		return (NULL);
	while (str1[i])
	{
		str3[i++] = str1[j++];
	}
	j = 0;
	while (str2[j])
	{
		str3[i++] = str2[j++];
	}
	str3[i] = '\0';
	return (str3);
}
