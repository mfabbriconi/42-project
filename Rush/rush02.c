/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agiaccon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 08:27:06 by agiaccon          #+#    #+#             */
/*   Updated: 2022/10/16 08:32:09 by agiaccon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_row(int n, char a, char b, char c)
{
	int	i;

	i = 1;
	ft_putchar(a);
	while (i < n - 1)
	{
		ft_putchar(b);
		i++;
	}
	if (n > 1)
		ft_putchar(c);
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	i;

	if (y <= 0 || x <= 0)
		return ;
	i = 1;
	ft_print_row(x, 'A', 'B', 'A');
	while (i < y -1)
	{
		ft_print_row(x, 'B', ' ', 'B');
		i++;
	}
	if (y > 1)
		ft_print_row(x, 'C', 'B', 'C');
}
