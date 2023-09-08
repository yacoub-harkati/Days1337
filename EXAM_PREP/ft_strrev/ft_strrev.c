/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaharkat <yaharkat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 17:51:58 by yaharkat          #+#    #+#             */
/*   Updated: 2023/09/07 17:51:58 by yaharkat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    *ft_strrev(char *str)
{
    int len;
    int i;
    char temp;

    len = 0;
    i = 0;
    while(str[len])
        len++;
    while(i < len / 2)
    {
        temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
        i++ 
    }
    return (str);
}