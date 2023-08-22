/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaharkat <yaharkat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 14:52:09 by yaharkat          #+#    #+#             */
/*   Updated: 2023/08/22 15:46:48 by yaharkat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	length_cal(char *str)
{
	int	i;

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
	int	dest_length;
	int	i;

	i = 0;
	dest_length = length_cal(dest);
	while (*(src + i) && size--)
	{
		dest[dest_length + i] = src[i];
		i++;
	}
	dest[dest_length + i - 1] = '\0';
	return (dest_length);
}
