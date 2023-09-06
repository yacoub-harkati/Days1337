/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaharkat <yaharkat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 17:35:23 by yaharkat          #+#    #+#             */
/*   Updated: 2023/09/05 21:36:07 by yaharkat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DO_OP_H
# define DO_OP_H

# include <unistd.h>

void	ft_putnbr(long nb);
int		ft_atoi(char *str);
void	do_op(int a, int b, char op);
int		ft_strcmp(char *s1, char *s2);
void	ft_putchar(char c);
int		ft_multiplication(int a, int b);
int		ft_addition(int a, int b);
int		ft_substraction(int a, int b);
int		ft_division(int a, int b);
int		ft_modulo(int a, int b);

#endif
