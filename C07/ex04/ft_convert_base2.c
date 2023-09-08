/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaharkat <yaharkat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 13:39:32 by yaharkat          #+#    #+#             */
/*   Updated: 2023/09/07 13:39:34 by yaharkat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_space(char c)
{
	if ((c >= 9 && c <= 13) || c == ' ')
		return (1);
	return (0);
}

int	is_valid_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+')
			return (0);
		if (is_space(base[i]))
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

int	get_index(char c, char *base)
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

int	parse_number(char *str, int i, char *base)
{
	int	base_len;
	int	number;

	number = 0;
	base_len = is_valid_base(base);
	while (get_index(str[i], base) >= 0)
	{
		number *= base_len;
		number += get_index(str[i], base);
		i++;
	}
	return (number);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	number;
	int	neg;

	number = 0;
	neg = 0;
	i = 0;
	if (is_valid_base(base) < 2)
		return (0);
	while (is_space(str[i]))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			neg++;
		i++;
	}
	if (get_index(str[i], base) >= 0)
		number = parse_number(str, i, base);
	if (neg % 2 == 1)
		number *= -1;
	return (number);
}
