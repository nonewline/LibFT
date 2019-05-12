#include "libft.h"

char	*ft_strnstr(char *str, char *to_find, size_t n)
{
	size_t i;
	size_t j;

	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (to_find[j] == str[i + j] && j < n)
		{
			if (to_find[j + 1] == '\0')
				return (str + i);
			j++;
		}
		i++;
	}
	return (NULL);
}
