/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaharkat <yaharkat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 14:30:38 by yaharkat          #+#    #+#             */
/*   Updated: 2023/08/22 20:16:56 by yaharkat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef unsigned char	t_char;

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int				cmp_result;

	cmp_result = 0;
	i = 0;
	if (!n)
	{
		cmp_result = (t_char)s1[0] - (t_char)s2[0];
		return (cmp_result);
	}
	while (s1[i] && i < n)
	{
		if (s1[i] != s2[i])
		{
			cmp_result = (t_char)s1[i] - (t_char)s2[i];
			return (cmp_result);
		}
		i++;
	}
	if (i < n)
	{
		cmp_result = (t_char)s1[i] - (t_char)s2[i];
		return (cmp_result);
	}
	return (0);
}
