/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaharkat <yaharkat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 13:37:48 by yaharkat          #+#    #+#             */
/*   Updated: 2023/09/05 14:31:32 by yaharkat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_read.h"

int main(int ac, char *av[])
{
	int fd;
	int bytesread;
	char temp_buffer[4096];

	if (ac < 2)
	{
		write(2, "File name missing.\n", 20);
	}
	else if (ac == 2)
	{
		fd = open(av[1], O_RDONLY);
		while ((bytesread = read(fd, temp_buffer, sizeof(temp_buffer))) > 0)
		{
			write(1, temp_buffer, bytesread);
		}
		if (bytesread == -1)
		{
			write(2, "Cannot read file.\n", 19);
			close(fd);
		}
		close(fd);
	}
	else
	{
		write(2, "Too many arguments.\n", 21);
	}
	return (0);
}
