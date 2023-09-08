/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaharkat <yaharkat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 06:53:26 by yaharkat          #+#    #+#             */
/*   Updated: 2023/09/08 07:21:38 by yaharkat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int main(int ac, char **av)
{
	char base[9];
	int i;
	int dec;
	
	i = 0;
	dec = atoi(av[1]);
	if (ac == 2)
	{
		while(i < 8)
		{
			base[i] = '0';
			i++;
		}
		base[i] = '\0';
		while(dec)
		{
			base[--i] = (dec % 2) + 48;
			dec /= 2;
		}
		i = 0;
		while(base[i])
		{
			write(1,&base[i],1);
			i++;
		}
	}
	write(1,"\n",1);
	return 0;
}
