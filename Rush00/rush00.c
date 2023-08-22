/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgafaiti <lgafaiti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 17:20:44 by yaharkat          #+#    #+#             */
/*   Updated: 2023/08/20 20:15:32 by lgafaiti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_row(int row, int column, int x, int y)
{
	if (row == 1 && (column == 1 || column == x))
	{
		ft_putchar('o');
	}
	else if (row == y && (column == 1 || column == x))
	{
		ft_putchar('o');
	}
	else if (row != 1 && row != y && column != 1 && column != x)
	{
		ft_putchar(' ');
	}
	else if (row != 1 && row != y)
	{
		ft_putchar('|');
	}
	else
	{
		ft_putchar('-');
	}
}

void	rush(int x, int y)
{
	int	row;
	int	column;

	row = 1;
	if (x <= 0 || y <= 0)
		return ;
	while (row <= y)
	{
		column = 1;
		while (column <= x)
		{
			print_row(row, column, x, y);
			column++;
		}
		ft_putchar('\n');
		row++;
	}
}
