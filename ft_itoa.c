/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfreixo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 17:34:51 by mfreixo-          #+#    #+#             */
/*   Updated: 2021/10/29 17:44:00 by mfreixo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_numlen(int n)
{
	if (n < 0)
		return (ft_numlen(n * -1) + 1);
	if (n > 9)
		return (ft_numlen(n / 10) + 1);
	else
		return (1);
}

void	ft_nucpy(int k, int sign, char *num, int n)
{
	while (--k >= 0)
	{
		if (k == 0 && sign == -1)
			num[k] = '-';
		else
		{
			num[k] = n % 10 + '0';
			n /= 10;
		}
	}
}

char	*ft_itoa(int n)
{
	char	*num;
	int		k;
	int		sign;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	sign = 1;
	if (n < 0)
		sign = -1;
	k = ft_numlen(n) + 1;
	num = malloc(sizeof(char) * k);
	if (!num)
		return (NULL);
	k -= 1;
	num[k] = '\0';
	n *= sign;
	ft_nucpy(k, sign, num, n);
	return (num);
}
