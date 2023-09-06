/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_strs.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaharkat <yaharkat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 02:04:57 by yaharkat          #+#    #+#             */
/*   Updated: 2023/09/05 02:26:58 by yaharkat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list *ft_create_elem(void *data, t_list *next)
{
	t_list *current;
	
	if (!(current = (t_list *)malloc(sizeof(t_list))))
		return 0;
	current->data = data;
	current->next = next;
	return current;
}

t_list *ft_list_push_strs(int size, char **strs)
{
	int i;
	t_list *current;
	t_list *next;

	i = 0;
	next = NULL;
	while (i < size)
	{
		current = ft_create_elem((void *)strs[i], next);
		next = current;
		i++;
	}
	return (current);
}
