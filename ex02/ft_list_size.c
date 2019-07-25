/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alabreui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 02:12:32 by alabreui          #+#    #+#             */
/*   Updated: 2019/07/25 02:18:23 by alabreui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		ft_list_size(t_list *begin_list)
{
	int length;
	
	length = 0;
	while (begin_list)
	{
		begin_list = begin_list->next;
		length++;
	}
	return (length);
}
