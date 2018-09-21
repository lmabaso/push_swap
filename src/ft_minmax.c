/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_minmax.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmabaso <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/21 14:40:27 by lmabaso           #+#    #+#             */
/*   Updated: 2018/08/22 15:49:09 by lmabaso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int			ft_min(t_list **head)
{
	t_list	*tmp;
	int		min;

	tmp = *head;
	min = *(int *)tmp->content;
	while (tmp)
	{
		if (min > *(int *)tmp->content)
			min = *(int *)tmp->content;
		tmp = tmp->next;
	}
	return (min);
}

int			ft_max(t_list **head)
{
	t_list	*tmp;
	int		max;

	tmp = *head;
	max = *(int *)tmp->content;
	while (tmp)
	{
		if (max < *(int *)tmp->content)
			max = *(int *)tmp->content;
		tmp = tmp->next;
	}
	return (max);
}

int			ft_at_index(t_list **head, int index)
{
	t_list	*tmp;

	tmp = *head;
	while (index)
	{
		tmp = tmp->next;
		index--;
	}
	return (*(int *)tmp->content);
}
