/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfreixo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 17:59:35 by mfreixo-          #+#    #+#             */
/*   Updated: 2021/11/02 11:29:30 by mfreixo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*p;
	char	*s1;
	int		len;
	int		i;

	i = 0;
	len = (int)ft_strlen(s);
	s1 = (char *) s;
	p = malloc(sizeof(char) * len);
	if (!p)
		return (NULL);
	while (i < len)
	{
		*(p + i) = *(s1 + i);
		i++;
	}
	*(p + i) = '\0';
	return (p);
}
