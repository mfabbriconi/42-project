/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfabbric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 15:40:25 by mfabbric          #+#    #+#             */
/*   Updated: 2022/10/31 15:40:29 by mfabbric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	k;

	i = 0;
	k = 0;
	while (dest[i] != 0)
		i++;
	while (src[k] != 0 && k < nb)
	{
		dest[i] = src[k];
		k++;
		i++;
	}
	dest[i] = 0;
	return (dest);
}
