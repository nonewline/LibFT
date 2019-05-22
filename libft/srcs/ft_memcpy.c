/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fremoor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 08:34:24 by fremoor           #+#    #+#             */
/*   Updated: 2019/05/22 14:23:55 by fremoor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memcpy(void *str1, const void *str2, size_t n)
{
	unsigned char	*str1c;
	unsigned char	*str2c;
	size_t			i;

	str1c = (unsigned char *)str1;
	str2c = (unsigned char *)str2;
	i = 0;
	while (i < n)
	{
		str1c[i] = str2c[i];
		i++;
	}
	return (str1c);
}
