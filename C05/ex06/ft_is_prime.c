/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaharkat <yaharkat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 00:56:16 by yaharkat          #+#    #+#             */
/*   Updated: 2023/08/24 01:27:26 by yaharkat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
