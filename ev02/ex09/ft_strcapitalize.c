/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfabbric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 16:53:25 by mfabbric          #+#    #+#             */
/*   Updated: 2022/10/25 17:08:00 by mfabbric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_lowcase(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int		i;
	int		flag;

	i = 0;
	flag = 0;
	ft_lowcase(str);
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z' && flag == 0)
		{
			str[i] = str[i] - 32;
			flag = 1;
		}
		else if (str[i] >= '0' && str[i] <= '9' && flag == 0)
		{
			flag = 1;
		}
		else if (!(str[i] >= '0' && str[i] <= '9')
			&& !(str[i] >= 'a' && str[i] <= 'z') && flag == 1)
		{
			flag = 0;
		}
		i++;
	}
	return (str);
}
