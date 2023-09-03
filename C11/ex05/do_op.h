/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaharkat <yaharkat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 17:35:23 by yaharkat          #+#    #+#             */
/*   Updated: 2023/09/03 18:28:02 by yaharkat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DO_OP_H
# define DO_OP_H

# include <unistd.h>

typedef enum s_bool
{
	true = 1,
	false = 0
}		t_bool;

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
