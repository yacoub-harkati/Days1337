/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   interval.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaharkat <yaharkat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 18:11:48 by yaharkat          #+#    #+#             */
/*   Updated: 2023/09/07 18:11:48 by yaharkat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char get_char(int i, char c)
{
    if (((i % 3 == 0) && (i % 5 == 0)) || i % 5 == 0)
    {
        return '5';
    }
    else if (i % 3 == 0)
    {
        return '3';
    }
    return c;
}

int main(int ac, char **av)
{
    int i;
    char c;

    (void)ac;
    i = 0;
    while (av[1][i])
    {
        c = get_char(i, av[1][i]);
        write(1, &c, 1);
        i++;
    }
    write(1, "\n", 1);
}