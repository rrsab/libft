#include "libft.h"

char	ft_tolower(char s1);

int main(void)
{
	char a;
	char b;

	a = 'A';
	b = ft_tolower(a);
	printf("%c\n", b);
}