/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaharkat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 11:57:45 by yaharkat          #+#    #+#             */
/*   Updated: 2023/08/16 11:57:52 by yaharkat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>


void ft_putchar(char c){
	write(1,&c, 1);
}


void ft_print_alphabet(void){
	char a = 'a';
	while(a<='z'){
		ft_putchar(a++);
	}
}


int main(void){
	ft_print_alphabet();
	return 0;
}
