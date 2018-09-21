/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pos.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmabaso <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 15:48:28 by lmabaso           #+#    #+#             */
/*   Updated: 2018/08/22 15:49:12 by lmabaso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int			ft_first(t_list **head)
{
	return (*(int *)(*head)->content);
}

int			ft_second(t_list **head)
{
	return (*(int *)(*head)->next->content);
}

int			ft_last(t_list **head)
{
	t_list	*tmp;

	tmp = *head;
	while (tmp && tmp->next)
	{
		tmp = tmp->next;
	}
	return (*(int *)tmp->content);
}

int			ft_pos(t_list **head, int num)
{
	int		index;
	t_list	*tmp;

	tmp = *head;
	index = 0;
	while (tmp)
	{
		if (*(int *)tmp->content == num)
			break ;
		tmp = tmp->next;
		index++;
	}
	return (index);
}
