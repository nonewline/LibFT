#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	char **ret;
	size_t i;
	size_t j;
	size_t k;

	ret = ft_memalloc(ft_strlen(s) + 1);
	i = 0;
	j = 0;
	while (s[i] == '\0')
	{
		if (s[i] == c)
			i++;
		else
		{
			k = 0;
			while (s[i + k] != '\0' && (s[i + k] != c))
				k++;
			ret[j] = ft_strsub(s, i, k);
			i += k;
			j++;
		}
	}
	ret[j] = 0;
	return (ret);
}
