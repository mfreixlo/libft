/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfreixo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 18:12:58 by mfreixo-          #+#    #+#             */
/*   Updated: 2021/11/03 13:43:55 by mfreixo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	n;
	size_t	dst_size;
	size_t	src_size;

	n = 0;
	dst_size = ft_strlen(dest);
	src_size = ft_strlen(src);
	if (dst_size >= size)
		return (size + src_size);
	else if (size > 0)
	{
		dest = dest + dst_size;
		while (*src && n < size - dst_size - 1)
		{
			*dest = *src;
			n++;
			src++;
			dest++;
		}
	}
	*dest = '\0';
	return (src_size + dst_size);
}
