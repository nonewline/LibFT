/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fremoor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 09:24:16 by fremoor           #+#    #+#             */
/*   Updated: 2019/05/21 12:56:36 by fremoor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char *str, char *to_find, size_t n)
{
	size_t str_len;
	size_t find_len;

	if (!*to_find)
		return ((char *)str);
	find_len = ft_strlen(to_find);
	str_len = ft_strlen(str);
	while (*str && n >= find_len && find_len <= str_len)
	{
		if (!ft_strncmp(str, to_find, find_len))
			return ((char *)str);
		n--;
		str_len--;
		str++;
	}
	return (NULL);
}
