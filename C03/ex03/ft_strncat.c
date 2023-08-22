/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaharkat <yaharkat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 15:34:45 by yaharkat          #+#    #+#             */
/*   Updated: 2023/08/22 20:17:49 by yaharkat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	cal_length(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				src_len;
	unsigned int	i;

	i = 0;
	src_len = cal_length(dest);
	while (src[i] && nb--)
	{
		dest[src_len + i] = src[i];
		i++;
	}
	dest[src_len + i] = '\0';
	return (dest);
}
