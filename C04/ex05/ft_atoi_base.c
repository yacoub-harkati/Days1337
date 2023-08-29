/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaharkat <yaharkat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 15:32:27 by yaharkat          #+#    #+#             */
/*   Updated: 2023/08/27 11:28:11 by yaharkat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int	get_pos_in_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
		{
			return (i);
		}
		i++;
	}
	return (-1);
}

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

int	ft_atoi_base(char *str, char *base)
{
	long	number;
	int		baselen;
	int		sign;
	int		temp;
	int		index;

	number = 0;
	index = 0;
	sign = 1;
	baselen = check(base);
	if (baselen == 0)
	{
		return (0);
	}
	index = find_str_start(str, &sign);
	temp = get_pos_in_base(str[index], base);
	while (str[index] && temp != -1)
	{
		number *= (long)baselen;
		number += (long)temp;
		index++;
		temp = get_pos_in_base(str[index], base);
	}
	return (number * (long)sign);
}
