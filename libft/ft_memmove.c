#include <libft.h>

void    *ft_memmove(void *dest, const void *src, size_t len)
{
    unsigned char           *d;
    const unsigned char     *s;

    d = dest;
    s = src;
	if (!dest && !src)
		return (0);
	if (dest < src)
        return (ft_memcpy(dest, src, len));
    while (len-- > 0)
        d[len] = s[len];
    return (dest);
}