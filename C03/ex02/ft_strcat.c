/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaharkat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 14:35:53 by yaharkat          #+#    #+#             */
/*   Updated: 2023/08/21 15:33:44 by yaharkat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int cal_length(char *str)
{
	int i;

	i = 0;
	while(str[i])
	{
		i++;
	}
	return i;
}
char *ft_strcat(char *dest, char *src)
{
	int src_len;
	int i;

	i = 0;
	src_len = cal_length(dest);
	while (src[i])
	{
		dest[src_len + i] = src[i];
		i++;
	}
	dest[src_len + i] = '\0';
	return (dest);
}
