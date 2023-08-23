/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaharkat <yaharkat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 02:55:48 by yaharkat          #+#    #+#             */
/*   Updated: 2023/08/23 16:01:07 by yaharkat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_double_chars(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		j = i + 1;
		while (str[j])
		{
			if (str[i] == str[j])
			{
				return (1);
			}
			j++;
		}
		i++;
	}
	return (0);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	check(char *base)
{
	int	base_len;

	base_len = 0;
	while (base[base_len])
	{
		if (base[base_len] == '+' || base[base_len] == '-')
		{
			return (0);
		}
		base_len++;
	}
	if (base_len < 2)
	{
		return (0);
	}
	if (is_double_chars(base))
	{
		return (0);
	}
	return (base_len);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		base_len;
	long	long_nbr;

	long_nbr = nbr;
	base_len = check(base);
	if (!base_len)
	{
		return ;
	}
	if (long_nbr < 0)
	{
		long_nbr = -long_nbr;
		ft_putchar('-');
	}
	if (long_nbr >= base_len)
	{
		ft_putnbr_base(long_nbr / base_len, base);
	}
	ft_putchar(base[long_nbr % base_len]);
}
