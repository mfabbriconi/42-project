#include "libft.h"

size_t  ft_strlcpy(char *dest, char *src, size_t len)
{
	size_t  i;

    i = 0;
    if (!len)
        return (ft_strlen(src));
    while (src[i] && (i< len - 1))
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = 0;
    return (ft_strlen(src));
}