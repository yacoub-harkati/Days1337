/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaharkat <yaharkat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 15:47:16 by yaharkat          #+#    #+#             */
/*   Updated: 2023/09/06 23:47:16 by yaharkat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		is_valid(char *base);
int		compute_length(long nbr, int base_len);
int		ft_atoi_base(char *str, char *base);

int	find_str_start(char *str, int *sign)
{
	int	index;

	index = 0;
	while ((str[index] >= 9 && str[index] <= 13) || str[index] == 32)
	{
		index++;
	}
	while (str[index] == '-' || str[index] == '+')
	{
		if (str[index] == '-')
		{
			*sign = -*sign;
		}
		index++;
	}
	return (index);
}

int	check_index(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

char	*ft_convert_base2(long number, int sign, char *base_to, char *tab)
{
	int	base_len;
	int	size;
	int	i;

	base_len = is_valid(base_to);
	i = 0;
	size = compute_length(number, base_len);
	if (sign)
		tab[0] = '-';
	if (!tab)
		return (NULL);
	while (i < size)
	{
		tab[size - i - !sign] = base_to[number % base_len];
		number /= base_len;
		i++;
	}
	tab[size + sign] = '\0';
	return (tab);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	long	number;
	int		size;
	int		base_len;
	int		sign;
	char	*final_nbr_in_base;

	sign = 0;
	size = 0;
	if (!is_valid(base_from) || !is_valid(base_to) || !*nbr)
		return (NULL);
	number = ft_atoi_base(nbr, base_from);
	base_len = is_valid(base_to);
	final_nbr_in_base = NULL;
	if (number < 0)
	{
		sign = 1;
		number = -number;
	}
	size = compute_length(number, base_len);
	final_nbr_in_base = (char *)malloc((size + 2) * sizeof(char));
	ft_convert_base2(number, sign, base_to, final_nbr_in_base);
	return (final_nbr_in_base);
}
