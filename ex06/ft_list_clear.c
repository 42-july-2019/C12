/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alabreui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 11:33:15 by alabreui          #+#    #+#             */
/*   Updated: 2019/07/25 13:21:45 by alabreui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_clear(t_list *begin_list, void (*free_fct)(void*))
{
	t_list	*elem_to_clear;

	while (begin_list)
	{
		(*free_fct)(begin_list->data);
		elem_to_clear = begin_list;
		begin_list = begin_list->next;
		free(elem_to_clear);
	}
}
