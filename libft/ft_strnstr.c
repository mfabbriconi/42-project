#include "libft.h"

char   *strnstr(const char *big, const char *little, size_t len)
{
    unsigned char    *a;
    unsigned char    *b;
    size_t      i;
    size_t      j;

    a = big;
    b = little;
    i = 0;
    j = 0;
    if (strlen(little) > strlen(big))
		return (NULL);
	while (a)
	{
		while (i + j < len && a[i + j] == b[j] && a[i] && b[j])
		{
			j++;
		}
		if (!b[j])
			return ((char *)a + i);
		i++;
		j = 0;
	}
}