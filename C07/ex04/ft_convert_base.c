/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaharkat <yaharkat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 13:39:27 by yaharkat          #+#    #+#             */
/*   Updated: 2023/09/07 13:39:28 by yaharkat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		is_space(char c);
int		is_valid_base(char *base);
int		ft_atoi_base(char *str, char *base);

int	compute_len(int nb, char *base)
{
	long	number;
	int		base_len;
	int		i;

	number = nb;
	if (number < 0)
		number *= -1;
	i = 0;
	base_len = is_valid_base(base);
	if (number == 0)
		return (1);
	while (number > 0)
	{
		i++;
		number /= base_len;
	}
	if (nb <= 0)
		i++;
	return (i);
}

char	*fill_final_str(char *str, int i, int num, char *base)
{
	long	number;
	int		sign;
	int		index;
	int		base_len;

	base_len = is_valid_base(base);
	index = i - 1;
	sign = 0;
	number = num;
	if (number < 0)
	{
		sign = 1;
		number *= -1;
	}
	while (index >= 0)
	{
		str[index] = base[number % base_len];
		if (sign && index == 0)
			str[index] = '-';
		number /= base_len;
		index--;
	}
	str[i] = '\0';
	return (str);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*str;
	int		i;
	int		num;

	if (is_valid_base(base_from) < 2 || is_valid_base(base_to) < 2)
		return (0);
	num = ft_atoi_base(nbr, base_from);
	str = malloc(sizeof(char) * compute_len(num, base_to) + 1);
	if (!str)
		return (0);
	i = compute_len(num, base_to);
	str = fill_final_str(str, i, num, base_to);
	return (str);
}
