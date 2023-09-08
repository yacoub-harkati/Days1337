/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.C                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaharkat <yaharkat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 01:53:58 by yaharkat          #+#    #+#             */
/*   Updated: 2023/09/08 01:53:58 by yaharkat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int ac, char **av)
{
    int i;
    int old_i;
    int count;

    count = 0;
    i = 0;
    if (ac == 2)
    {
        while (av[1][i])
        {
            while (av[1][i] && (av[1][i] <= 13 && av[1][i] >= 9) || av[1][i] == 32)
                i++;
            old_i = i;
            while (av[1][i] && !((av[1][i] <= 13 && av[1][i] >= 9) || av[1][i] == 32))
                i++;
            if (old_i < i)
                count++;
        }
        i = 0;
        while (av[1][i])
        {
            while (av[1][i] && (av[1][i] <= 13 && av[1][i] >= 9) || av[1][i] == 32)
                i++;
            while (av[1][i] && !((av[1][i] <= 13 && av[1][i] >= 9) || av[1][i] == 32))
            {
                write(1, &av[1][i], 1);
                i++;
            }
            if (--count >= 1)
            {
                write(1, "   ", 3);
            }
        }
    }
    write(1, "\n", 1);
    return 0;
}