/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaharkat <yaharkat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 21:19:39 by yaharkat          #+#    #+#             */
/*   Updated: 2023/08/24 14:46:28 by yaharkat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (!nb || nb == 1)
		return (1);
	if (nb < 0)
	{
		return (0);
	}
	return (ft_recursive_factorial(nb - 1) * nb);
}
