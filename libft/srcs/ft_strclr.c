#include <stdio.h>

void	ft_strclr(char *s)
{
	while (*s != '\0')
		*s++ = '\0';
}

int	main(void)
{
	char s1[] = "Hello";
	printf("%s\n\n", s1);
	
	ft_strclr(s1);
	printf("%s\n", s1);
}
