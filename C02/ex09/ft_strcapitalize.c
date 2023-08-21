/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaharkat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 20:02:23 by yaharkat          #+#    #+#             */
/*   Updated: 2023/08/21 13:40:44 by yaharkat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	to_lower(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 'A' && str[i] <= 'Z'))
		{
			str[i] += 32;
		}
		i++;
	}
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

	to_lower(str);
	i = 1;
	if (is_alpha(str[0]) && (str[0] >= 'a' && str[0] <= 'z'))
	{
		str[0] = to_upper(str[0]);
	}
	while (str[i])
	{
		if (!is_alpha(str[i - 1]) && !(str[i - 1] >= '0' && str[i - 1] <= '9'))
		{
			if ((str[i] >= 'a' && str[i] <= 'z') && is_alpha(str[i]))
			{
				str[i] = to_upper(str[i]);
			}
		}
		i++;
	}
	return (str);
}
