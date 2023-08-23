/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaharkat <yaharkat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 14:52:09 by yaharkat          #+#    #+#             */
/*   Updated: 2023/08/23 00:33:12 by yaharkat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	length_cal(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_length;
	unsigned int	src_length;
	unsigned int	i;

	i = 0;
	dest_length = length_cal(dest);
	src_length = length_cal(src);
	if (!size || size <= dest_length)
	{
		return (src_length + size);
	}
	while (src[i] && i < size - dest_length - 1)
	{
		dest[dest_length + i] = src[i];
		i++;
	}
	dest[dest_length + i] = '\0';
	return (dest_length + src_length);
}
