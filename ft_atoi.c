#include "libft.h"

int	ft_atoi(const char *str)
{
	unsigned int	i;
	int				sign;
	int				result;
	int				num;

	i = 0;
	result = 0;
	sign = 1;
	num = 18;
	while ((str[i] == ' ') || ((str[i] > 8) && (str[i] < 14)))
		i++;
	if (str[i] == '-')
		sign = -1;
	if ((str[i] == '-') || (str[i] == '+'))
		i++;
	while ((str[i] >= '0') && (str[i] <= '9'))
	{
		if (!num--)
			return ((1 + sign) / (-2));
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (sign * result);
}
