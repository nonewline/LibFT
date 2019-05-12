#include "libft.h"

int		ft_atoi(const char *str)
{
	int res;
	int neg;

	neg = 1;
	res = 0;
	while (*str && (*str == ' ' || *str == '\t' || *str == '\n' ||
					*str == '\f' || *str == '\v' || *str == '\r'))
		str++;
	if (*str == '-')
		neg = -1;
	while (*str == '-' || *str == '+')
		str++;
	while (*str && (*str >= '0' && *str <= '9'))
	{
		res = res * 10 + (*str - 48);
		str++;
	}
	return (res * neg);
}
