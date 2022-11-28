/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfabbric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 15:40:49 by mfabbric          #+#    #+#             */
/*   Updated: 2022/10/31 15:40:53 by mfabbric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	if (to_find[0] == 0)
		return (str = &str[0]);
	while (str[i])
	{
		if (str[i] == to_find[0])
		{
			j = i;
			k = 0;
			while (str[j] == to_find[k] && to_find[k])
			{
				k++;
				j++;
				if (to_find[k] == 0)
					return (str = &str[i]);
			}
		}
		i++;
	}
	return (0);
}
