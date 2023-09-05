/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaharkat <yaharkat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 17:35:23 by yaharkat          #+#    #+#             */
/*   Updated: 2023/09/05 14:44:57 by yaharkat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DO_OP_H
# define DO_OP_H

# include <unistd.h>

void	ft_putnbr(long nb);
long	ft_atoi(char *str);
void	do_op(long a, long b, char op);
long	ft_strcmp(char *s1, char *s2);
void	ft_putchar(char c);
long	ft_multiplication(long a, long b);
long	ft_addition(long a, long b);
long	ft_substraction(long a, long b);
long	ft_division(long a, long b);
long	ft_modulo(long a, long b);

#endif
