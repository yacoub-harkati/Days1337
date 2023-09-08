/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaharkat <yaharkat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 22:02:21 by yaharkat          #+#    #+#             */
/*   Updated: 2023/09/07 22:02:21 by yaharkat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int is_in_base(char c, char *base, int str_base)
{
    int i;

    i = 0;
    while (base[i] && i < str_base)
    {
        if (c == base[i])
            return 1;
        i++;
    }
    return 0;
}

int is_valid(char *str, int str_base)
{
    char *HEX = "0123456789abcdef";
    char *HEXM = "0123456789ABCDEF";
    int i;

    HEX = "0123456789abcdef";
    HEXM = "0123456789ABCDEF";

    i = 0;
    while (str[i])
    {
        if (!is_in_base(str[i], HEX, str_base) || !is_in_base(str[i], HEXM, str_base))
            return 0;
        i++;
    }
    return 1;
}

int get_base_pos(char c)
{
    if (c >= '0' && c <= '9')
    {
        return (c - 48);
    }
    else if (c >= 'a' && c <= 'f')
    {
        return (c - 'a' + 10);
    }
    else if (c >= 'A' && c <= 'F')
    {
        return (c - 'A' + 10);
    }
    return -1;
}

int ft_atoi_base(const char *str, int str_base)
{
    int i;
    int res;
    int sign;

    i = 0;
    sign = 1;
    res = 0;
    if (str_base > 16)
    {
        return (res);
    }
    if (str[0] == '-' || str[0] == '+')
    {
        if (str[0] == '-')
        {
            sign *= -1;
        }
        i++;
    }
    while (get_base_pos(str[i]) != -1)
    {
        res = (res * str_base) + get_base_pos(str[i]);
        i++;
    }
    return (sign * res);
}

int main(int ac, char **av)
{
    printf("%d\n", ft_atoi_base(av[1], atoi(av[2])));
    return 0;
}