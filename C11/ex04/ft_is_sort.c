/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaharkat <yaharkat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 15:28:42 by yaharkat          #+#    #+#             */
/*   Updated: 2023/09/04 20:08:58 by yaharkat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_asc_order(int *tab, int length, int (*f)(int, int))
{
	int	sort_cmp;
	int	i;

	i = 0;
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

int	is_desc_order(int *tab, int length, int (*f)(int, int))
{
	int	sort_cmp;
	int	i;

	i = 0;
	while (i < length - 1)
	{
		sort_cmp = f(tab[i], tab[i + 1]);
		if (sort_cmp < 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	if (is_asc_order(tab, length, f) || is_desc_order(tab, length, f))
	{
		return (1);
	}
	return (0);
}
