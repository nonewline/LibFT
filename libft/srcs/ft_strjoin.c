#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *str;
	size_t len;

	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	str = (char *)malloc(sizeof(char) * len);
	if (str == NULL)
		return (NULL);
	ft_strcpy(str, s1);
	ft_strcat(str, s2);
	return (str);
}
