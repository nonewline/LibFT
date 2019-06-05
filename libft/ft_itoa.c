/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fremoor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 08:29:17 by fremoor           #+#    #+#             */
/*   Updated: 2019/05/22 11:40:50 by fremoor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	n_len(int n)
{
	int i;

	i = 0;
	if (n == 0)
		return (1);
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char		*ft_itoa(int n)
{
	int		neg;
	int		len;
	char	*str;

	neg = (n < 0 ? 1 : 0);
	len = n_len(n);
	str = ft_strnew((size_t)(len + neg));
	if (!str)
		return (NULL);
	if (neg == 1)
		str[0] = '-';
	else if (n > 0)
		len--;
	else
		str[0] = '0';
	while (n)
	{
		str[len] = (n < 0) ? '0' + -(n % 10) : '0' + (n % 10);
		n /= 10;
		len--;
	}
	return (str);
}