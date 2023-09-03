/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaharkat <yaharkat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 16:40:22 by yaharkat          #+#    #+#             */
/*   Updated: 2023/09/03 17:21:32 by yaharkat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

int	do_op(int a, int b, char op)
{
	if (op == '+')
	{
		return (ft_addition(a, b));
	}
	if (op == '-')
	{
		return (ft_substraction(a, b));
	}
	if (op == '/')
	{
		return (ft_division(a, b));
	}
	if (op == '*')
	{
		return (ft_multiplication(a, b));
	}
	if (op == '%')
	{
		return (ft_modulo(a, b));
	}
	return (0);
}
