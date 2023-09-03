/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaharkat <yaharkat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 16:40:50 by yaharkat          #+#    #+#             */
/*   Updated: 2023/09/03 17:38:14 by yaharkat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

t_bool is_valid_op(char *str)
{
	char *ops;
	int i;

	i = 0;
	ops = {'/', '+', '-', '*', '%'};

	while (i < 5)
	{
		if (*str == ops[])
	{
		if (ft_strcmp(str, "/") != 0)
			return (false);
	}
	}
	
	if (*str == '+')
	{
		if (ft_strcmp(str, "+") != 0)
			return (false);
	}
	if (*str == '-')
	{
		if (ft_strcmp(str, "-") != 0)
			return (false);
	}
	if (*str == '*')
	{
		if (ft_strcmp(str, "*") != 0)
			return (false);
	}
	if (*str == '%')
	{
		if (ft_strcmp(str, "%") != 0)
			return (false);
	}
	return (true);
}

int main(int ac, char *av[])
{
	int result;
	int n1;
	int n2;

	result = 0;
	if (ac == 4)
	{
		if (!is_valid_op(av[2]))
		{
			ft_putchar('0');
			ft_putchar('\n');
			return (0);
		}
		n1 = ft_atoi(av[1]);
		n2 = ft_atoi(av[3]);
		if (*av[2] == '/' && n2 == 0)
		{
			write(1, "Stop : division by zero\n", 25);
			return (0);
		}
		if (*av[2] == '%' && n2 == 0)
		{
			write(1, "Stop : modulo by zero\n", 23);
			return (0);
		}
		result = do_op(n1, n2, *av[2]);
		ft_putnbr(result);
		ft_putchar('\n');
	}
	return (0);
}
