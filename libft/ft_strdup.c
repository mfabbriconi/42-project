#include "libft.h"

char    *strdup(const char *s)
{
	char	*s2;
	int		i;
	
	i = 0;
	s2 = malloc(ft_strlen(s) * sizeof(char));
	if (!s2)
		return (NULL);
	while (s2)
	{
		s2[i] = s[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}