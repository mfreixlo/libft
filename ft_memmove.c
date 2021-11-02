/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfreixo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 11:14:44 by mfreixo-          #+#    #+#             */
/*   Updated: 2021/11/02 11:39:10 by mfreixo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *str1, const void *str2, size_t n)
{
	char	*temp;
	int		i;
	int		len;

	if (!str1)
		return (NULL);
	if (!str2)
		return (str1);
	len = (int)ft_strlen(str2);
	temp = malloc(sizeof(char) * len);
	if (!temp)
		return (str1);
	temp = ft_strdup((char *)str2);
	i = 0;
	while (i < n && *temp)
	{
		((char *) str1)[i] = *temp;
		temp++;
		i++;
	}
	while (((char *)str1)[i])
		i++;
	((char *)str1)[i] = '\0';
	return (str1);
}
