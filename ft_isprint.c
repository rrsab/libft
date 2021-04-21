#include "libft.h"

int	ft_isascii(int ch)
{
	if ((ch >= 32) && (ch <= 126))
        return (1);
    else 
        return (0);
}