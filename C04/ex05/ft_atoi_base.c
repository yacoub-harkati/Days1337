/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaharkat <yaharkat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 11:38:31 by yaharkat          #+#    #+#             */
/*   Updated: 2023/08/23 13:00:22 by yaharkat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int is_double_chars(char *str)
{
    int i;
    int j;

    i = 0;
    while (str[i])
    {
        j = i + 1;
        while (str[j])
        {
            if (str[i] == str[j])
            {
                return (1);
            }
            j++;
        }
        i++;
    }
    return (0);
}

int ft_atoi_base(char *str, char *base)
{
    int base_len;

    base_len = 0;
    while (base[base_len])
    {
        if ((base[base_len] >= 9 && base[base_len] <= 13) ||
            base[base_len] == 32 || base[base_len] == '+' ||
            base[base_len] == '-')
        {
            return (0);
        }
        base_len++;
    }

    if (is_double_chars(base))
    {
        return (0);
    }

    if (base_len < 2)
    {
        return (0);
    }
}