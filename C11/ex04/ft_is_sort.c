/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaharkat <yaharkat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 15:28:42 by yaharkat          #+#    #+#             */
/*   Updated: 2023/09/03 15:40:23 by yaharkat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	sort_cmp;
	int	i;

	i = 0;
	sort_cmp = 0;
	while (i < length - 1)
	{
		sort_cmp = f(tab[i], tab[i + 1]);
		if (sort_cmp > 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}
