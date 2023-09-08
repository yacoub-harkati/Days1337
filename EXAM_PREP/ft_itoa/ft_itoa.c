/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaharkat <yaharkat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 00:27:55 by yaharkat          #+#    #+#             */
/*   Updated: 2023/09/08 00:27:55 by yaharkat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char *ft_itoa(int nbr)
{
    char *res;
    long temp;
    int len;

    if (nbr < 0)
        len = 1;
    else
        len = 0;
    temp = nbr;
    while (nbr)
    {
        nbr /= 10;
        len++;
    }
    if (!(res = malloc(sizeof(char) * len)))
        return NULL;
    if (temp < 0)
    {
        res[0] = '-';
        temp = -temp;
    }
    res[len] = '\0';
    while (temp)
    {
        res[--len] = (temp % 10) + 48;
        temp /= 10;
    }
    return res;
}

int main(int ac, char **av)
{
    printf("%s\n", ft_itoa(atoi(av[1])));
}