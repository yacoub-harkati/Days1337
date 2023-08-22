/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaharkat <yaharkat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 14:52:09 by yaharkat          #+#    #+#             */
/*   Updated: 2023/08/22 20:18:36 by yaharkat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	length_cal(char *str)
{
	unsigned int	i;

	i = 0;
	while (*str)
	{
		i++;
		str++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_length;
	unsigned int	src_length;
	int				i;

	i = 0;
	dest_length = length_cal(dest);
	src_length = length_cal(src);
	size -= dest_length - 1;
	while (*(src + i) && size--)
	{
		dest[dest_length + i] = src[i];
		i++;
	}
	if (size > dest_length)
	{
		dest[dest_length + i] = '\0';
	}
	else
	{
		dest[dest_length + i - 1] = '\0';
	}
	return (dest_length + src_length);
}
