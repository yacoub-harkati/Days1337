/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaharkat <yaharkat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 01:20:44 by yaharkat          #+#    #+#             */
/*   Updated: 2023/09/08 01:20:44 by yaharkat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char *ft_itoa_base(int value, int base)
{
    char *hex;
    char *res;
    int len;
    long temp;

    hex = "0123456789ABCDEF";
    len = 0;
    temp = value;
    printf("%ld\n", temp);
    if (base < 2 || base > 16)
        return 0;
    if (value < 0)
        len = 1;
    while(value)
    {
        value /= base;
        len++;
    }
    if(!(res = malloc(sizeof(char) * len)))
        return NULL;
    if (temp < 0)
    {
        temp = -temp;
        res[0] = '-';
    }
    res[len] = '\0';
    while(temp)
    {
        res[--len] = hex[temp % base];
        temp /= base;
    }
    return res;
}

int main(int ac, char **av)
{
    printf("%s\n", ft_itoa_base(atoi(av[1]), atoi(av[2])));
}