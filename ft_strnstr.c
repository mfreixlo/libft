/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfreixo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 18:01:47 by mfreixo-          #+#    #+#             */
/*   Updated: 2021/11/03 13:45:07 by mfreixo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	n;

	i = 0;
	if (!(*little))
		return ((char *)big);
	n = ft_strlen(little);
	while (big[i] && i < len)
	{
		if (big[i] == little[0])
		{
			if (!ft_strncmp(&big[i], little, n) && i + n <= len)
			{
				return ((char *)big + i);
			}
		}
		i++;
	}
	return (NULL);
}
