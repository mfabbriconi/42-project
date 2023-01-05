#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char		*s1;
	unsigned char			c1;

	s1 = s;
	c1 = c;
	while (n && (s1 != c1))
	{
		s1++;
		n--;
	}
	if (n)
		return ((void *)s1);
	else
		return (NULL);
}