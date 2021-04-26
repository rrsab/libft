#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*str;
	unsigned int	i;

	if ((!s1) || (!s2))
		return (NULL);
	str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!str)
		return (NULL);
	i = 0;
	ft_strlcpy(str, s1, ft_strlen(s1) + 1);
	ft_strlcat(str + ft_strlen(s1), s2, ft_strlen(s2) + 1);
	return (str);
}
