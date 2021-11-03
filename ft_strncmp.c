/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfreixo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 18:09:42 by mfreixo-          #+#    #+#             */
/*   Updated: 2021/11/03 13:44:58 by mfreixo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int		i;
	char	*c1;
	char	*c2;

	if ((int)n < 0)
	{
		return (s1 - s2);
	}
	c1 = (char *) s1;
	c2 = (char *) s2;
	i = 0;
	while (*c1 != '\0' && *c2 != '\0' && *c1 == *c2 && i < (int) n)
	{
		c1++;
		c2++;
		i++;
	}
	if (i == (int) n)
		return (0);
	return ((unsigned char)*c1 - (unsigned char)*c2);
}
