/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaharkat <yaharkat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 21:46:55 by yaharkat          #+#    #+#             */
/*   Updated: 2023/09/04 22:41:41 by yaharkat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_list.h>
#include <stdlib.h>

t_list *ft_create_elem(void *data, t_list *next)
{
	t_list *current;
	
	if (!(current = (t_list *)malloc(sizeof(t_list))))
		return 0;
	current->data = data;
	current->next = next;
	return (current);
}

void ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *current;

	current = ft_create_elem(data, *begin_list);
	*begin_list = current;
}
