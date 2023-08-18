/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaharkat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 14:17:29 by yaharkat          #+#    #+#             */
/*   Updated: 2023/08/18 22:50:40 by yaharkat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int	lnb;

	lnb = nb;
	if (-2147483648 == lnb)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	
	if (nb < 0)
	{
		ft_putchar('-');
		lnb = nb * -1;
	}
	
	if (lnb > 10)
	{
		ft_putnbr(lnb / 10);
		ft_putnbr(lnb % 10);
	}
	else if (lnb < 10)
	{
		ft_putchar(lnb + '0');
	}
}