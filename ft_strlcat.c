/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfreixo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 18:12:58 by mfreixo-          #+#    #+#             */
/*   Updated: 2021/10/29 18:13:54 by mfreixo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	src_size;
	size_t	dst_size;

	src_size = 0;
	dst_size = 0;
	while (*dst)
	{
		dst++;
		dst_size++;
	}
	while ((int)src_size < (int)(size - dst_size - 1) && *src)
	{
		*dst = *src;
		src_size++;
		dst++;
		src++;
	}
	while (*src)
	{
		src++;
		src_size++;
	}
	*dst = '\0';
	return (src_size + dst_size);
}
