#include "libft.h"

void    *calloc(size_t nmemb, size_t size)
{
    void    *path;

    path = malloc(nmemb * size);
    if (!path)
        return (NULL);
    ft_bzero(path, nmemb *size);
    return ((void *) path);
}