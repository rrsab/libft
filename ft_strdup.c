#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*str;
	size_t	i;
	size_t	l;

	l = 0;
	while (s1[l])
		l++;
	str = malloc(sizeof(char) * (l + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
