#include "./incl/libft.h"

int		main(void)
{
	char dest[] = "Olded";
	const char src[] = "Newed";

	ft_putstr("Before: ");
	ft_putstr(dest);
	ft_putchar('\n');
	ft_putstr("After: ");
	ft_putstr(ft_memmove(dest, src, 3));
	return (0);
}
