/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alabreui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 13:54:05 by alabreui          #+#    #+#             */
/*   Updated: 2019/07/25 13:56:29 by alabreui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

t_list *ft_list_at(t_list *begin_list, unsigned int nbr)
{
	int		count;

	count = 0;
	while (begin_list && count != nbr)
	{
		begin_list = begin_list->next;
		count++;
	}
	return (begin_list ? begin_list : 0);
}
