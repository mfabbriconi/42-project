/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfabbric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 01:09:39 by mfabbric          #+#    #+#             */
/*   Updated: 2022/10/26 01:09:45 by mfabbric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_hex(unsigned char b)
{
	int		dec;
	int		f;
	char	*a;

	a = "0123456789abcdef";
	dec = b;
	write(1, "\\", 1);
	f = dec / 16;
	write(1, &a[f], 1);
	f = dec % 16;
	write(1, &a[f], 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	c;

	c = 0;
	while (str[c] != 0)
	{
		if (str[c] >= 32 && str[c] <= 126)
			write(1, &str[c], 1);
		else if (str[c] < 32 || str[c] > 126)
			print_hex(str[c]);
		c++;
	}
}
