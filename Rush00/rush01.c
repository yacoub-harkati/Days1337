/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaharkat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 17:20:55 by yaharkat          #+#    #+#             */
/*   Updated: 2023/08/20 17:58:56 by yaharkat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_first_row(int column, int x)
{
	if (column == 1)
	{
		ft_putchar('/');
	}
	else if (column == x)
	{
		ft_putchar('\\');
	}
	else
	{
		ft_putchar('*');
	}
}

void	print_middle_rows(int column, int x)
{
	if (column != 1 && column != x)
	{
		ft_putchar(' ');
	}
	else
	{
		ft_putchar('*');
	}
}

void	print_final_row(int column, int x)
{
	if (column == 1)
	{
		ft_putchar('\\');
	}
	else if (column == x)
	{
		ft_putchar('/');
	}
	else
	{
		ft_putchar('*');
	}
}

void	print_rows(int row, int column, int x, int y)
{
	if (row == 1)
	{
		print_first_row(column, x);
	}
	else if (row == y)
	{
		print_final_row(column, x);
	}
	else
	{
		print_middle_rows(column, x);
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
			print_rows(row, column, x, y);
			column++;
		}
		ft_putchar('\n');
		row++;
	}
}
