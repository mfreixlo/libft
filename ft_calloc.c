/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfreixo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 18:00:44 by mfreixo-          #+#    #+#             */
/*   Updated: 2021/11/02 12:37:41 by mfreixo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	int		max_int;
	void	*s;

	max_int = 2147483647;
	if (nmemb != 0 && max_int / (int) nmemb < (int) size)
		return (NULL);
	s = malloc(size * nmemb);
	if (!s)
		return (NULL);
	ft_memset(s, 0, (nmemb * size));
	return (s);
}
