#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t len)
{
	unsigned char           *d;
    const unsigned char     *s;

    d = dst;
    s = src;
	if (!dst && !src)
		return (0);
	while (len-- > 0)
        *d++ = *s++;
    return (dst);
}