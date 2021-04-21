#include "libft.h"

int	ft_isprint(int ch);

int main(void)
{
	int a;
	int b;

	a = 11;
	b = ft_isprint(a);
	printf("%d\n", b);
}