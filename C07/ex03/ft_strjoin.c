/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaharkat <yaharkat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 23:15:25 by yaharkat          #+#    #+#             */
/*   Updated: 2023/08/28 21:44:20 by yaharkat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	cal_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	compute_final_len(char **strs, int size, char *sep)
{
	int	i;
	int	final_len;

	i = 0;
	final_len = 0;
	while (i < size)
	{
		final_len += cal_len(strs[i]);
		final_len += cal_len(sep);
		i++;
	}
	return (final_len + 1);
}

char	*ft_strcat(char *dest, char *src)
{
	int	src_len;
	int	i;

	i = 0;
	src_len = cal_len(dest);
	while (src[i])
	{
		dest[src_len + i] = src[i];
		i++;
	}
	dest[src_len + i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*final_str;
	int		final_len;
	int		i;

	if (!size)
	{
		final_str = (char *)malloc(sizeof(char));
		*final_str = '\0';
		return (final_str);
	}
	i = 0;
	final_len = compute_final_len(strs, size, sep);
	final_str = (char *)malloc((final_len) * sizeof(char));
	if (final_str == NULL)
		return (NULL);
	*final_str = '\0';
	while (i < size)
	{
		final_str = ft_strcat(final_str, strs[i]);
		if (i < size - 1)
			final_str = ft_strcat(final_str, sep);
		i++;
	}
	return (final_str);
}
