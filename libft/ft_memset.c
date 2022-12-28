#include "libft.h"

void	*ft_memset(void *s, int c, size_t len)
{
    unsigned int	i;
    char			*dest;

	dest = s;
	i = 0;
	while (i < len)
	{
		dest[i] = c;
		i++;
	}
	return ((void*)s);
}