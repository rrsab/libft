#include "libft.h"

int	ft_isascii(int ch);

int	main(void)
{
	int a;
	int b;

	a = 128;
	b = ft_isascii(a);
	printf("%d\n", b);
}