#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

int					ft_atoi(const char *str);
void				ft_bzero(void *s, size_t n);
int					ft_isalnum(int c);
int					ft_isalpha(int c);
int					ft_isascii(int c);
int					ft_isdigit(int c);
int					ft_isprint(int c);
void				*ft_memset(void *s, int c, size_t len);
void	            *ft_memcpy(void *dst, const void *src, size_t len);
void                *ft_memmove(void *dest, const void *src, size_t len);
size_t          	ft_strlcpy(char *dest, char *src, size_t len);
unsigned int    	ft_strlcat(char *dest, char *src, unsigned int size);
int					ft_strlen(const char *s);
int                 ft_toupper(int c);
int                 ft_tolower(int c);

#endif