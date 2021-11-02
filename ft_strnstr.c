/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfreixo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 18:01:47 by mfreixo-          #+#    #+#             */
/*   Updated: 2021/10/29 18:09:31 by mfreixo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	if (!(*little))
		return ((char *)big);
	while (big[i] && i < (int) len)
	{
		if (big[i] == little[0])
		{
			k = i;
			j = 0;
			while (*(big + k) && *(little + j)
				&& big[k] == little[j++] && k++ < (int) len);
			if (little[j] == '\0')
				return ((char *)big + i);
			else
				i++;
		}
		i++;
	}
	return (NULL);
}
