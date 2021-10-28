/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfreixo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 16:08:43 by mfreixo-          #+#    #+#             */
/*   Updated: 2021/10/28 16:09:18 by mfreixo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*r;
	int				i;

	i = 0;
	r = (void *) s;
	while (*r && i < (int) n)
	{
		if (c == *r)
			return (r);
		r++;
		i++;
	}
	return (NULL);
}
