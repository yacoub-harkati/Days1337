/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaharkat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 14:17:29 by yaharkat          #+#    #+#             */
/*   Updated: 2023/08/19 12:06:25 by yaharkat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#define INT_MIN -2147483648
#define SLOTS_MAX 32

int	number_to_digits(int number, char *digits)
{
	int	index;

	index = 0;
	while (number > 0 && index < SLOTS_MAX)
	{
		digits[index] = '0' + number % 10;
		number /= 10;
		index += 1;
	}
	return (index);
}

void	print_digits(char *digits, int length)
{
	int	index;

	index = length - 1;
	while (index >= 0)
	{
		write(1, digits + index, 1);
		index--;
	}
}

void	ft_putnbr(int nb)
{
	int		index;
	char	digits[SLOTS_MAX];
	int		length;

	if (nb == 0)
	{
		write(1, "0", 1);
		return ;
	}
	index = 0;
	while (index < SLOTS_MAX)
		digits[index++] = 0;
	if (nb < 0)
	{
		if (nb == INT_MIN)
		{
			write(1, "-2147483648", 11);
			return ;
		}
		nb = -nb;
		write(1, "-", 1);
	}
	length = number_to_digits(nb, digits);
	print_digits(digits, length);
}
