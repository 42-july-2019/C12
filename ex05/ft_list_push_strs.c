/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_strs.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alabreui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 03:32:13 by alabreui          #+#    #+#             */
/*   Updated: 2019/07/25 11:23:31 by alabreui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list	*ft_create_elem(void *data)
{
	t_list	*elem;

	if (!(elem = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	elem->data = data;
	elem->next = NULL;
	return (elem);
}

t_list	*ft_list_push_strs(int size, char **strs)
{
	int		i;
	t_list	*first_elem;
	t_list	*prev_elem;
	t_list	*curr_elem;

	i = 0;
	while (i < size)
	{
		if (i == 0)
			first_elem = ft_create_elem(strs[0]);
		else if (i == 1)
		{
			prev_elem = ft_create_elem(strs[1]);
			first_elem->next = prev_elem;
		}
		else
		{
			curr_elem = ft_create_elem(strs[i]);
			prev_elem->next = curr_elem;
			prev_elem = curr_elem;
		}
		i++;
	}
	return (first_elem);
}
