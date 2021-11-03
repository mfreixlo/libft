/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfreixo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 11:14:44 by mfreixo-          #+#    #+#             */
/*   Updated: 2021/11/03 14:14:38 by mfreixo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *str1, const void *str2, size_t n)
{
	char		*aux;
	const char	*str;

	if (!str1 || !str2)
		return (NULL);
	aux = str1;
	str = str2;
	if (str1 <= str2)
	{
		while (n--)
		{
			*aux = *str;
			aux++;
			str++;
		}
	}
	else
	{
		while (n--)
		{	
			aux[n] = str[n];
		}
	}
	return (str1);
}
