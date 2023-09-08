/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaharkat <yaharkat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 15:45:59 by yaharkat          #+#    #+#             */
/*   Updated: 2023/09/07 15:45:59 by yaharkat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

int ft_strcmp(char *s1, char *s2)
{
    while(*s1 && *s2 && *s1 == *s2)
    {
        s1++;
        s2++;
    }
    return (unsigned int)*s1 - (unsigned int)*s2;
}

void op(int a, int b, char *op)
{
    int res;

    res = 0;
    if (*op == '+' && ft_strcmp(op, "+") == 0)
        res = add(a, b);
    if (*op == '-' && ft_strcmp(op, "-") == 0)
        res = minus(a, b);
    if (*op == '*' && ft_strcmp(op, "*") == 0)
        res = multi(a, b);
    if (*op == '/' && ft_strcmp(op, "/") == 0)
        res = divide(a, b);
    if (*op == '%' && ft_strcmp(op, "%") == 0)
        res = modulo(a, b);
    printf("%d", res);
}

int main(int ac, char **av)
{
    int n1;
    int n2;

    if (ac == 4)
    {
        n1 = atoi(av[1]);
        n2 = atoi(av[3]);
        op(n1,n2, av[2]);
    }
    write(1,"\n",1);
    return 0;
}
