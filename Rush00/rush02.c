#include "rush02.h"

void	print_row(int row, int column, int x, int y)
{
	if (row == 1 && (column == 1 || column == x))
	{
		ft_putchar('A');
	}
	else if (row == y && (column == 1 || column == x))
	{
		ft_putchar('C');
	}
	else if (row != 1 && row != y && column != 1 && column != x)
	{
		ft_putchar(' ');
	}
	else
	{
		ft_putchar('B');
	}
}

void	rush(int x, int y)
{
	int row;
	int column;

	row = 1;
	if (x <= 0 || y <= 0)
		return;
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
