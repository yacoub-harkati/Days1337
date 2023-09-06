/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaharkat <yaharkat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 22:35:18 by yaharkat          #+#    #+#             */
/*   Updated: 2023/09/04 23:09:29 by yaharkat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list *ft_create_elem(void *data)
{
	t_list *current;

	if (!(current = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	current->data = data;
	current->next = NULL;

	return (current);
}

void ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *current;

	current = ft_create_elem(data);
	while (begin_list->next)
	{
		begin_list = begin_list->next;
	}
	begin_list->next = current;
}
