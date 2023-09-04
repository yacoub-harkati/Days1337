/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaharkat <yaharkat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 16:40:22 by yaharkat          #+#    #+#             */
/*   Updated: 2023/09/04 20:12:15 by yaharkat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

void	do_op(long a, long b, char op)
{
	long	result;

	if (op == '+')
		result = ft_addition(a, b);
	if (op == '-')
		result = ft_substraction(a, b);
	if (op == '/')
		result = ft_division(a, b);
	if (op == '*')
		result = ft_multiplication(a, b);
	if (op == '%')
		result = ft_modulo(a, b);
	ft_putnbr(result);
	ft_putchar('\n');
}
