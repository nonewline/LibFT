/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fremoor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 08:34:24 by fremoor           #+#    #+#             */
/*   Updated: 2019/05/23 09:26:15 by fremoor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memcpy(void *str1, const void *str2, size_t n)
{
	long	*lptr1;
	long	*lptr2;
	char	*cptr1;
	char	*cptr2;

	if (str1 == NULL && str2 == NULL)
		return (NULL);
	lptr1 = (long *)str1;
	lptr2 = (long *)str2;
	while (n >= sizeof(long))
	{
		*(lptr1++) = *(lptr2++);
		n -= sizeof(long);
	}
	cptr1 = (char *)lptr1;
	cptr2 = (char *)lptr2;
	while (n--)
		*(cptr1++) = *(cptr2++);
	return (str1);
}
