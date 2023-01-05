#include "libft.h"

int    ft_memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned char *a;
    unsigned char *b;

    a = s1;
    b = s2;
    if (n && *a == *b)
    {
        *a++;
        *b++;
        n--;
    }
    return ((unsigned int *) *a - *b);
}