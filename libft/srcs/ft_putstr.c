#include <unistd.h>

void	ft_putstr(char const *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		write(1, &s[i], 1);
		i++;
	}
}

int	main(void)
{
	char str[] = "Hello World";
	ft_putstr(str);
}
