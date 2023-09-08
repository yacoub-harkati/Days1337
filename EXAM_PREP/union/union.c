/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaharkat <yaharkat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 06:25:12 by yaharkat          #+#    #+#             */
/*   Updated: 2023/09/08 06:33:44 by yaharkat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int is_in_str(char c, char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return 1;
		i++;
	}
	return 0;
}

int is_in_str_index(char c, char *str, int index)
{
	int i;

	i = 0;
	while (str[i] && i < index)
	{
		if (str[i] == c)
			return 1;
		i++;
	}
	return 0;
}

int main(int ac, char **av)
{
	int i;

	i = 0;
	if (ac == 3)
	{
		while (av[1][i])
		{
			if (!is_in_str_index(av[1][i], av[1], i))
				write(1, &av[1][i], 1);
			i++;
		}
		i = 0;
		while (av[2][i])
		{
			if (!is_in_str_index(av[2][i], av[2], i))
			{
				if (!is_in_str(av[2][i], av[1]))
				{
					write(1, &av[2][i], 1);
				}
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return 0;
}
