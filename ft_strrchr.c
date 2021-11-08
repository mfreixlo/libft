/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfreixo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 18:10:24 by mfreixo-          #+#    #+#             */
/*   Updated: 2021/11/03 11:06:00 by mfreixo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*d;
	size_t	len;
	size_t	i;

	c = c % 256;
	len = ft_strlen(s);
	d = NULL;
	i = 0;
	while (i < len)
	{
		if (*s == c)
			d = (char *)s;
		s++;
		i++;
	}
	if (*s == '\0' && c == '\0')
		return ((char *)s);
	return (d);
}
