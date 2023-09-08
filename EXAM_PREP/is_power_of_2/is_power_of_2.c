/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaharkat <yaharkat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 21:50:34 by yaharkat          #+#    #+#             */
/*   Updated: 2023/09/07 21:50:34 by yaharkat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int main(int ac, char **av)
{
    int number;

    if (ac == 2)
    {
        number = atoi(av[1]);
        while (number > 0 && number % 2 == 0)
            number /= 2;
        if (number == 1)
        {
            write(1, "YES\n", 4);
            return 0;
        }
            write(1, "NO\n", 3);
        return 0;
    }
    write(1, "\n", 1);
    return (0);
}