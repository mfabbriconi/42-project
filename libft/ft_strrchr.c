#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    const unsigned char		*dest;
	dest = s;
    size_t  len;
    len = ft_strlen(s);
    while (len-1 >= 0)
	{
		if (dest[len-1] == c)
			return ((char *)(s + len-1));
		len--;
	}
	return (NULL);
}