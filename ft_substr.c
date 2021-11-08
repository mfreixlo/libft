/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfreixo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 17:48:33 by mfreixo-          #+#    #+#             */
/*   Updated: 2021/11/03 13:45:38 by mfreixo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;
	char	*str;

	if (!s)
		return (NULL);
	str = (char *)s;
	i = 0;
	if (start >= ft_strlen(s))
	{
		return (ft_strdup(""));
	}
	if (len <= ft_strlen(s))
		substr = malloc(sizeof(char) * (len + 1));
	else
		substr = malloc(sizeof(char) * (ft_strlen(s) - start));
	if (!substr)
		return (NULL);
	while (str[start] && i < len)
	{
		substr[i++] = str[start];
		start++;
	}
	substr[i] = '\0';
	return (substr);
}
