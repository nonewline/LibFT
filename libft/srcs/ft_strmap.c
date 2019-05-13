#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	size_t i;
	char *fresh;

	i = 0;
	fresh = ft_strnew(ft_strlen(s));
	while (fresh[i] != '\0')
	{
		fresh[i] = f(s[i]);
		i++;
	}
	return (fresh);
}
