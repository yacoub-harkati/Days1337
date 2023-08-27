/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaharkat <yaharkat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 21:44:27 by yaharkat          #+#    #+#             */
/*   Updated: 2023/08/25 21:59:16 by yaharkat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*p_str;

	i = 0;
	while (src[i])
	{
		i++;
	}
	p_str = (char *)malloc((i + 1) * sizeof(char));
	if (p_str == NULL)
	{
		return (0);
	}
	i = 0;
	while (src[i])
	{
		p_str[i] = src[i];
		i++;
	}
	p_str[i] = '\0';
	return (p_str);
}
