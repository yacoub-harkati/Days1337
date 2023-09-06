/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaharkat <yaharkat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 15:32:27 by yaharkat          #+#    #+#             */
/*   Updated: 2023/09/06 22:45:00 by yaharkat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int	is_char_in_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (1);
		i++;
	}
	return (0);
}

int	is_valid_str(char *str, char *base, int index)
{
	int	i;

	i = index;
	while (str[i])
	{
		if (!is_char_in_base(str[i], base))
			return (0);
		i++;
	}
	return (1);
}

int	is_valid(char *base)
{
	int	i;

	i = 0;
	if (!base || base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || base[i] == base[i + 1])
			return (0);
		i++;
	}
	return (i);
}

int	ft_atoi_base(char *str, char *base)
{
	int	res;
	int	sign;
	int	base_len;
	int	i;

	res = 0;
	sign = 1;
	i = 0;
	base_len = is_valid(base);
	if (!base_len)
		return (0);
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	if (!is_valid_str(str, base, i))
		return (0);
	while (check_index(str[i], base) != -1)
		res = (res * base_len) + check_index(str[i++], base);
	return (sign * res);
}
