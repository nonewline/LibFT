/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fremoor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 08:34:24 by fremoor           #+#    #+#             */
/*   Updated: 2019/05/22 12:02:09 by fremoor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memcpy(void *str1, const void *str2, size_t n)
{
	char	*str1c;
	char	*str2c;
	size_t	i;

	str1c = (char *)str1;
	str2c = (char *)str2;
	i = 0;
	while (i < n)
	{
		str1c[i] = str2c[i];
		i++;
	}
	return (str1c);
}
