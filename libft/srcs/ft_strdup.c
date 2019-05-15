#include "libft.h"

char	*ft_strdup(const char *s)
{
	char *str;
	size_t len;

	len = ft_strlen(s);
	str = (char*)malloc(sizeof(char) * len + 1);
	return (ft_strcpy(str, s));
}
