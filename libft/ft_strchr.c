#include "libft.h"

char *ft_strchr(const char *s, int c)
{
	const unsigned char		*dest;
	dest = s;
	while (*dest != 0)
	{
		if (*dest == c)
			return (*dest);
		*dest++;
	}
	return (NULL);
}