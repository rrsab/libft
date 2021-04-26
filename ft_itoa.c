#include "libft.h"

static int	ft_lenint(long int s)
{
	int	l;

	if (s <= 0)
		l = 1;
	else
		l = 0;
	while (s != 0)
	{
		s = s / 10;
		l++;
	}
	return (l);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		sign;
	int		l;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	sign = 1;
	l = ft_lenint(n);
	str = (char *)malloc(sizeof(char) * (l + 1));
	if (!str)
		return (NULL);
	if (n < 0)
	{
		sign = -1;
		n = n * -1;
	}
	str[l] = '\0';
	while (l-- >= 0)
	{
		str[l] = (n % 10) + '0';
		n = n / 10;
	}
	if (sign == -1)
		str[0] = '-';
	return (str);
}
