#include <unistd.h>

void	ft_putendl(char const *s)
{
	char c;

	while (*s != '\0')
	{
		write(1, &(*s++), 1);
	}
	write(1, "\n", 1);
}
