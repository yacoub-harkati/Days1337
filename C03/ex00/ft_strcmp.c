/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaharkat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 13:48:52 by yaharkat          #+#    #+#             */
/*   Updated: 2023/08/21 14:27:34 by yaharkat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef unsigned char t_char;

int ft_strcmp(char *s1, char *s2)
{
	int i;
	int cmp_result;

	cmp_result = 0;
	i = 0;
	while (s1[i])
	{
		if (s1[i] != s2[i])
		{
			cmp_result = (t_char)s1[i] - (t_char)s2[i];
			break;
		}
		i++;
	}
	cmp_result = (t_char)s1[i] - (t_char)s2[i];
	return (cmp_result);
}
