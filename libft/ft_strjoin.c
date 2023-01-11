#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	unsigned char	i;
	unsigned char	c;

	i = 0;
	c = 0;
	if (!s1 && !s2)
		return(NULL);
	str = malloc(ft_strlen(s1) + ft_strlen(s2) * sizeof(char));
	if (!str)
		return(NULL);
	while (s1)
		str[i++] = s1[i++];
	while (s2)
		str[i++] = s2[c++];
	str[i] = '\0';
	return(str);
}