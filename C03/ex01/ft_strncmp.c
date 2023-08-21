/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaharkat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 14:30:38 by yaharkat          #+#    #+#             */
/*   Updated: 2023/08/21 14:31:18 by yaharkat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef unsigned char t_char;

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int i;
	int cmp_result;

	cmp_result = 0;
	i = 0;
	while (s1[i])
	{
		if (s1[i] != s2[i] && i < n)
		{
			cmp_result = (t_char)s1[i] - (t_char)s2[i];
			break;
		}
		i++;
	}
	cmp_result = (t_char)s1[i] - (t_char)s2[i];
	return (cmp_result);
}
