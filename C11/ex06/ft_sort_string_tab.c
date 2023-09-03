/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaharkat <yaharkat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 20:18:36 by yaharkat          #+#    #+#             */
/*   Updated: 2023/09/03 20:41:31 by yaharkat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(char **a, char **b)
{
	char	*temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	cmp_result;

	cmp_result = 0;
	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
	{
		i++;
	}
	cmp_result = (unsigned char)s1[i] - (unsigned char)s2[i];
	return (cmp_result);
}

void	ft_sort_string_tab(char **tab)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	len = 0;
	while (tab[i++])
		len++;
	i = 0;
	while (i < len)
	{
		j = 0;
		while (j < len - i - 1)
		{
			if (ft_strcmp(tab[j], tab[j + 1]) > 0)
				ft_swap(&tab[j], &tab[j + 1]);
			j++;
		}
		i++;
	}
}
