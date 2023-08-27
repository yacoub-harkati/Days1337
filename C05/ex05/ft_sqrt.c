/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaharkat <yaharkat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 00:38:22 by yaharkat          #+#    #+#             */
/*   Updated: 2023/08/27 04:02:49 by yaharkat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	unsigned int	index;
	unsigned int	number;

	if (nb < 0)
	{
		return (0);
	}
	index = 1;
	number = nb;
	if (!number || number == 1)
		return (number);
	while (index * index <= number && index < 46341)
	{
		if (index * index == number)
			return (index);
		index++;
	}
	return (0);
}
