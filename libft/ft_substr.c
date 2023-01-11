#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	unsigned char	i;

	str = malloc(len * sizeof(char));
	i = 0;
	if (!str)
		return(NULL);
	while (s[start] != 0 && len > 0)
	{
		str[i] = s[start];
		start++;
		i++;
		len--;
	}
	str[i] = '\0';
	return(str);
}