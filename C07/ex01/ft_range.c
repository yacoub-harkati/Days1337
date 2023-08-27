/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaharkat <yaharkat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 21:50:54 by yaharkat          #+#    #+#             */
/*   Updated: 2023/08/25 22:19:20 by yaharkat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_fabs(int nb)
{
	if (nb < 0)
	{
		return (-nb);
	}
	return (nb);
}

int	*ft_range(int min, int max)
{
	int	size;
	int	*num_arr;
	int	i;

	size = max - min;
	i = 0;
	num_arr = NULL;
	if (min >= max)
	{
		return (num_arr);
	}
	num_arr = (int *)malloc((ft_fabs(size) + 1) * sizeof(int));
	if (num_arr == NULL)
	{
		return (0);
	}
	while (min < max)
	{
		num_arr[i] = min;
		min++;
		i++;
	}
	return (num_arr);
}
