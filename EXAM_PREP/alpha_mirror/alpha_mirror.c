/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaharkat <yaharkat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 14:25:13 by yaharkat          #+#    #+#             */
/*   Updated: 2023/09/07 14:25:13 by yaharkat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char get_char(char c)
{
    if (c >= 'a' && c <= 'z')
        return ('m' + 'n' - c);
    if (c >= 'A' && c <= 'Z')
        return ('M' + 'N' - c);
    return c;
}

int main(int ac, char **av)
{
    char c;

    if (ac == 2)
    {
        while (*av[1])
        {
            c = get_char(*av[1]);
            write(1, &c, 1);
            av[1]++;
        }
    }
    write(1, "\n", 1);
    return 0;
}