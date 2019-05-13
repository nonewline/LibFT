#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t i;
	char *fresh;

	i = 0;
	fresh = ft_strnew(ft_strlen(s));
	while (fresh[i] != '\0')
	{
		fresh[i] = f(i, s[i]);
		i++;
	}
	return (fresh);
}
