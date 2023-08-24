/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaharkat <yaharkat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 01:10:30 by yaharkat          #+#    #+#             */
/*   Updated: 2023/08/24 01:27:43 by yaharkat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define MAX_NUM 2147483647

int	ft_is_prime(int nb)
{
	int	divider;

	divider = 2;
	while (divider < nb)
	{
		if (nb % divider == 0)
		{
			return (0);
		}
		divider++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (nb++ && nb < MAX_NUM)
	{
		if (ft_is_prime(nb))
		{
			return (nb);
		}
	}
	return (-1);
}
