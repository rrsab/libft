#include "libft.h"

char	ft_toupper(char s1);

int main(void)
{
	char a;
	char b;

	a = 'z';
	b = ft_toupper(a);
	printf("%c\n", b);
}