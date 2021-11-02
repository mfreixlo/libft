/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfreixo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 18:09:42 by mfreixo-          #+#    #+#             */
/*   Updated: 2021/10/29 18:10:07 by mfreixo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int		i;
	char	*c1;
	char	*c2;

	c1 = (char *) s1;
	c2 = (char *) s2;
	i = 0;
	while (*c1 && *c2 && *c1 == *c2 && i < (int) n)
	{
		c1++;
		c2++;
		i++;
	}
	if (i == (int) n)
		return (0);
	return (*c1 - *c2);
}
