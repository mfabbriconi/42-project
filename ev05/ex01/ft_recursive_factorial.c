/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfabbric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 18:39:56 by mfabbric          #+#    #+#             */
/*   Updated: 2022/11/02 04:54:28 by mfabbric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int		c;

	c = 1;
	if (nb < 0)
		return (0);
	if (nb > 0)
	{
		c = nb * ft_recursive_factorial(nb - 1);
		nb--;
	}
	return (c);
}
