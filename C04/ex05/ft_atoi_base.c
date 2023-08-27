/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaharkat <yaharkat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 15:32:27 by yaharkat          #+#    #+#             */
/*   Updated: 2023/08/26 15:04:22 by yaharkat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_atoi_base(char *str, char *base)
{
	int	mines_count;
	int	number;

	mines_count = 1;
	while ((*str >= 9 && *str <= 13) || *str == 32)
	{
		str++;
	}
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			mines_count = -mines_count;
		str++;
	}
	
	return (number);
}
