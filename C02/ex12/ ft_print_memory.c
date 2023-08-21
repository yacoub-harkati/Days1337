/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    ft_print_memory.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaharkat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 00:37:41 by yaharkat          #+#    #+#             */
/*   Updated: 2023/08/21 06:11:57 by yaharkat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#define HEX_BASE "0123456789abcdef"

typedef unsigned char	t_byte;

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	put_str(char *str, unsigned int index, unsigned int size)
{
	unsigned int	i;

	i = 0;
	ft_putchar(' ');
	while (i < 16 && i + index < size)
	{
		if (str[i + index] < 32 || str[i + index] > 126)
		{
			ft_putchar('.');
		}
		else
		{
			ft_putchar(str[i + index]);
		}
		i++;
	}
	ft_putchar('\n');
}

void	put_char_hex(char *str, unsigned int index, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (i < 16 && str[i] && index + i < size)
	{
		if (!(i % 2))
		{
			ft_putchar(' ');
		}
		ft_putchar(HEX_BASE[(t_byte)str[i + index] / 16]);
		ft_putchar(HEX_BASE[(t_byte)str[i + index] % 16]);
		i++;
	}
	while (i < 16)
	{
		write(1, "  ", 2);
		if (!(i % 2))
		{
			ft_putchar(' ');
		}
		i++;
	}
}

void	put_addr(void *addr)
{
	t_byte	*ptr_addr;
	int		i;

	i = 7;
	ptr_addr = (t_byte *)&addr;
	while (i >= 0)
	{
		ft_putchar(HEX_BASE[*(ptr_addr + i) / 16]);
		ft_putchar(HEX_BASE[*(ptr_addr + i) % 16]);
		i--;
	}
	ft_putchar(':');
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (i < size)
	{
		put_addr(addr + i);
		put_char_hex(addr, i, size);
		put_str(addr, i, size);
		i += 16;
	}
	return (addr);
}
