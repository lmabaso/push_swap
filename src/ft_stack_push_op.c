/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_push_op.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmabaso <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 12:27:28 by lmabaso           #+#    #+#             */
/*   Updated: 2018/08/23 10:43:24 by lmabaso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_list		*ft_pop(t_list **head)
{
	t_list	*pop;

	pop = NULL;
	if (!*head)
		return (NULL);
	pop = *head;
	*head = (*head)->next;
	pop->next = NULL;
	return (pop);
}

void		ft_push_to(t_list **dest, t_list **src)
{
	if (!*src)
		return ;
	ft_lstadd(dest, ft_pop(src));
}
