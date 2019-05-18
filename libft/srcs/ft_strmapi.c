#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t i;
	char *fresh;

	if (!s || !f)
	    return (NULL);
	fresh = (char *)malloc(ft_strlen(s) + 1);
	if (fresh == NULL)
	    return (NULL);
	i = 0;
	while (s[i])
	{
	    fresh[i] = f(i, s[i]);
	    i++;
	}
	fresh[i] = '\0';
	return (fresh);
}
