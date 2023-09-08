/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaharkat <yaharkat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 19:19:44 by yaharkat          #+#    #+#             */
/*   Updated: 2023/09/07 20:21:55 by yaharkat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print(int *tab, int n)
{
	int	i;
	int	show;

	show = 1;
	i = 0;
	while (++i < n)
		if (tab[i - 1] >= tab[i])
			show = 0;
	if (!show)
		return ;
	i = -1;
	while (++i < n)
		ft_putchar(tab[i] + 48);
	if (tab[0] < (10 - n))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_combn(int n)
{
	int	i;
	int	tab[10];

	if (n > 10 || n < 0)
		return ;
	i = -1;
	while (++i < n)
		tab[i] = i;
	while (tab[0] <= (10 - n) && n >= 1)
	{
		print(tab, n);
		if (n == 10)
			break ;
		tab[n - 1]++;
		i = n;
		while (i && n > 1)
		{
			i--;
			if (tab[i] > 9)
			{
				tab[i - 1]++;
				tab[i] = 0;
			}
		}
	}
}
