/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfabbric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 18:43:02 by mfabbric          #+#    #+#             */
/*   Updated: 2022/11/02 23:31:52 by mfabbric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long	i;
	long	c;

	i = nb;
	c = 2;
	if (i == 1)
		return (1);
	if (i <= 0)
		return (0);
	c = 2;
	if (i >= 2)
	{
		while (c * c <= i)
		{
			while (c * c == i)
				return (c);
			c++;
		}
	}
	return (0);
}
