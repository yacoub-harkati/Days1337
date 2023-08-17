/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaharkat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 18:24:26 by yaharkat          #+#    #+#             */
/*   Updated: 2023/08/17 18:28:13 by yaharkat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>


int ft_strlen(char *str)
{
    int length;

    length = 0;
    while (*str)
    {
        length++;
        str++;    
    }
    return length;
}

int main()
{
    
    return  0;
}