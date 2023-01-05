#include "libft.h"

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	unsigned int	x;
	unsigned int	y;
	unsigned int	ldest;
	unsigned int	lsrc;

	x = 0;
	y = 0;
	while (dest[x] != '\0')
		x++;
	ldest = x;
	while (src[y] != '\0')
		y++;
	lsrc = y;
	if (size == 0 || size <= lsrc)
		return (lsrc + size);
	while (y < size - 1 - lsrc && src[y] != '\0')
	{
		dest[x] = src[y];
		y++;
		x++;
	}
	dest[x] = '\0';
	return (ldest + lsrc);
}
