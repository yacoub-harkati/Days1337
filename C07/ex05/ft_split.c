/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaharkat <yaharkat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 16:20:40 by yaharkat          #+#    #+#             */
/*   Updated: 2023/08/29 20:25:34 by yaharkat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (dest);
}

char	*ft_strchr(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (&str[i]);
		i++;
	}
	return (NULL);
}

void	count_words(char *str, char *charset, int *count, int str_len)
{
	int	i;
	int	old_i;

	i = 0;
	while (i < str_len)
	{
		while (i < str_len && ft_strchr(charset, str[i]) != NULL)
			i++;
		old_i = i;
		while (i < str_len && ft_strchr(charset, str[i]) == NULL)
			i++;
		if (old_i < i)
			(*count)++;
	}
}

void	split_string(char *str, char *charset, char **strs, int str_len)
{
	int		i;
	int		j;
	int		p_i;
	char	temp_buffer[16384];

	i = 0;
	j = 0;
	p_i = 0;
	while (i < str_len)
	{
		while (i < str_len && ft_strchr(charset, str[i]) != NULL)
			i++;
		j = 0;
		while (i < str_len && ft_strchr(charset, str[i]) == NULL)
			temp_buffer[j++] = str[i++];
		temp_buffer[j] = '\0';
		if (j > 0)
		{
			strs[p_i] = malloc(sizeof(char) * (j + 1));
			if (!strs[p_i])
				return ;
			ft_strcpy(strs[p_i++], temp_buffer);
		}
	}
}

char	**ft_split(char *str, char *charset)
{
	int		count;
	int		str_len;
	char	**strs;

	count = 0;
	str_len = 0;
	while (str[str_len])
		str_len++;
	count_words(str, charset, &count, str_len);
	strs = (char **)malloc((count + 1) * sizeof(char *));
	if (!strs)
		return (NULL);
	split_string(str, charset, strs, str_len);
	strs[count] = 0;
	return (strs);
}
