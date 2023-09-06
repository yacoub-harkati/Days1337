/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaharkat <yaharkat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 16:40:50 by yaharkat          #+#    #+#             */
/*   Updated: 2023/09/05 21:31:14 by yaharkat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

int	is_valid_op(char *str)
{
	int		i;
	char	*ops;

	i = 0;
	ops = "/*+%-";
	if (*str == '/' && ft_strcmp(str, "/") != 0)
		return (0);
	if (*str == '+' && ft_strcmp(str, "+") != 0)
		return (0);
	if (*str == '-' && ft_strcmp(str, "-") != 0)
		return (0);
	if (*str == '*' && ft_strcmp(str, "*") != 0)
		return (0);
	if (*str == '%' && ft_strcmp(str, "%") != 0)
		return (0);
	return (1);
}

void	print_invalid(void)
{
	ft_putchar('0');
	ft_putchar('\n');
}

int	main(int ac, char *av[])
{
	int	n1;
	int	n2;

	if (ac == 4)
	{
		if (!is_valid_op(av[2]))
		{
			print_invalid();
			return (0);
		}
		n1 = ft_atoi(av[1]);
		n2 = ft_atoi(av[3]);
		if (*av[2] == '/' && n2 == 0)
		{
			write(1, "Stop : division by zero\n", 24);
			return (0);
		}
		if (*av[2] == '%' && n2 == 0)
		{
			write(1, "Stop : modulo by zero\n", 22);
			return (0);
		}
		do_op(n1, n2, *av[2]);
	}
	return (0);
}
