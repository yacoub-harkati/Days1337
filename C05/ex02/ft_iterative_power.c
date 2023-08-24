/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaharkat <yaharkat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 21:52:44 by yaharkat          #+#    #+#             */
/*   Updated: 2023/08/24 14:45:18 by yaharkat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	number;

	i = 0;
	if (!power)
		return (1);
	if (power == 1)
		return (nb);
	if (power < 0)
		return (0);
	number = 1;
	while (i < power)
	{
		number *= nb;
		i++;
	}
	return (number);
}
