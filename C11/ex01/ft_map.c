/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaharkat <yaharkat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 03:01:35 by yaharkat          #+#    #+#             */
/*   Updated: 2023/09/03 03:10:59 by yaharkat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*num_array;

	i = 0;
	num_array = (int *)malloc(sizeof(int) * (length + 1));
	if (!num_array)
	{
		return (NULL);
	}
	while (i < length)
	{
		num_array[i] = f(tab[i]);
		i++;
	}
	return (num_array);
}
