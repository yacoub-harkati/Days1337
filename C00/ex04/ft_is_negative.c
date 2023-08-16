/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaharkat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 13:21:52 by yaharkat          #+#    #+#             */
/*   Updated: 2023/08/16 13:27:13 by yaharkat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>


void ft_putchar(char c){
    write(1, &c, 1);
}

void ft_is_negative(int n){
    if (n >= 0){
        ft_putchar('P');
        return;
    } 
    ft_putchar('N');
    
}
