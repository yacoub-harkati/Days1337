/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaharkat <yaharkat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 16:28:57 by yaharkat          #+#    #+#             */
/*   Updated: 2023/09/03 16:57:27 by yaharkat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

void	ft_putnbr(long nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putchar((nb % 10) + 48);
	}
	if (nb < 10)
	{
		ft_putchar(nb + 48);
	}
}
