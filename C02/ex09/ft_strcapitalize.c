/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaharkat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 20:02:23 by yaharkat          #+#    #+#             */
/*   Updated: 2023/08/19 21:05:03 by yaharkat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_lower(char c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}

int	is_num(char c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}

int	is_alpha(char c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	return (0);
}

char	to_upper(char c)
{
	c -= 32;
	return (c);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 1;
	if (is_alpha(str[0]) && is_lower(str[0]))
	{
		str[0] = to_upper(str[0]);
	}
	while (str[i])
	{
		if (!is_alpha(str[i - 1]) && !is_num(str[i - 1]))
		{
			if (is_lower(str[i]) && is_alpha(str[i]))
			{
				str[i] = to_upper(str[i]);
			}
		}
		i++;
	}
	return (str);
}
