/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaharkat <yaharkat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 15:32:27 by yaharkat          #+#    #+#             */
/*   Updated: 2023/08/23 15:34:02 by yaharkat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int g_invalid = 0;

int ft_pow(int a, int b);
int is_double_chars(char *str);

int check(char *base)
{
	int base_len;

	base_len = 0;
	while (base[base_len])
	{
		if ((base[base_len] >= 9 && base[base_len] <= 13) ||
			base[base_len] == 32 ||
			base[base_len] == '+' ||
			base[base_len] == '-')
		{
			g_invalid = 1;
			return 0;
		}
		base_len++;
	}
	if (is_double_chars(base))
	{
		g_invalid = 1;
		return 0;
	}
	if (base_len < 2)
	{
		g_invalid = 1;
		return 0;
	}
	return base_len;
}

int is_double_chars(char *str)
{
	int i;
	int j;

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

int is_char_in_base(char c, char *base)
{
	int i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
		{
			return (1);
		}
		i++;
	}
	return (0);
}

int base_to_int(char *str, char *base, int base_len, int position, int sign)
{
	int i;

	i = 0;
	if (position == 0)
	{
		while (*(str + position) != *str)
		{
			i++;
		}
		return sign * i;
	}
	else
	{
		while (*(str + position) != *str)
		{
			i++;
		}
		return base_to_int(str, base, base_len, position - 1, sign) + (i * ft_pow(base_len, position) * sign);
	}
}

int ft_pow(int a, int b)
{
	int i;

	i = 0;
	while (i < b)
	{
		a *= a;
		i++;
	}
	return a;
}

int ft_atoi_base(char *str, char *base)
{
	int base_len;
	int str_position;
	int sign;

	base_len = check(base);
	if (g_invalid)
		return (0);
	str_position = 0;
	sign = 1;

	while (*(str + str_position))
	{
		while (*str == '-' || *str == '+' ||
			   (*str >= 9 && *str <= 13) || *str == 32)
		{
			if (*str == '-')
				sign *= -1;
			str++;
		}
		if (is_char_in_base(*(str + str_position), base))
			return (0);
		str_position++;
	}
	return base_to_int(str, base, base_len, str_position - 1, sign);
}