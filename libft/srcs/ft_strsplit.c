#include "libft.h"

static int	word_len(char const *str, char c)
{
	int i;
	int temp;

	i = 0;
	temp = 0;
	while (*str)
	{
		if (temp == 1 && *str == c)
			temp = 0;
		if (temp == 0 && *str != c)
		{
			temp = 1;
			i++;
		}
		str++;
	}
	return (i);
}

char	**ft_strsplit(char const *s, char c)
{
	int i;
	int j;
	int len;
	int start;
	char **ret;

	if ((s == 0) || (c == 0))
		return (NULL);
	len = word_len(s, c);
	ret = malloc((sizeof(char *)) * (len + 1));
	i = 0;
	j = -1;
	while (++j < len)
	{
		while (s[i] && s[i] == c)
			i++;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		ret[j] = ft_strsub(s, start, i - start);
		i++;
	}
	ret[j] = NULL;
	return (ret);
}
