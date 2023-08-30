/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaharkat <yaharkat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 03:45:30 by yaharkat          #+#    #+#             */
/*   Updated: 2023/08/30 18:40:13 by yaharkat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*p_str;

	i = 0;
	while (src[i])
	{
		i++;
	}
	p_str = (char *)malloc((i + 1) * sizeof(char));
	if (p_str == NULL)
	{
		return (0);
	}
	i = 0;
	while (src[i])
	{
		p_str[i] = src[i];
		i++;
	}
	p_str[i] = '\0';
	return (p_str);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int					i;
	int					str_len;
	struct s_stock_str	*final_struct;

	i = 0;
	str_len = 0;
	final_struct = (struct s_stock_str *)malloc((ac + 1)
			* sizeof(struct s_stock_str));
	if (!ac)
	{
		final_struct[0].str = 0;
		return (final_struct);
	}
	if (final_struct == NULL)
		return (NULL);
	while (i < ac)
	{
		str_len = ft_strlen(av[i]);
		final_struct[i].size = ft_strlen(av[i]);
		final_struct[i].str = av[i];
		final_struct[i].copy = ft_strdup(final_struct[i].str);
		i++;
	}
	final_struct[i].str = 0;
	return (final_struct);
}
