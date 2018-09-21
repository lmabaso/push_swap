/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_update.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmabaso <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 12:31:39 by lmabaso           #+#    #+#             */
/*   Updated: 2018/08/22 12:34:39 by lmabaso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_update(t_list **a, t_list **b, char *cmd)
{
	if (ft_strequ(cmd, "sa"))
		ft_swap(a);
	else if (ft_strequ(cmd, "sb"))
		ft_swap(b);
	else if (ft_strequ(cmd, "pa"))
		ft_push_to(a, b);
	else if (ft_strequ(cmd, "pb"))
		ft_push_to(b, a);
	else if (ft_strequ(cmd, "ra"))
		ft_rotate_up(a);
	else if (ft_strequ(cmd, "rb"))
		ft_rotate_up(b);
	else if (ft_strequ(cmd, "rra"))
		ft_rotate_dwn(a);
	else if (ft_strequ(cmd, "rrb"))
		ft_rotate_dwn(b);
	else if (ft_strequ(cmd, "rr"))
		ft_rotate_up_rr(a, b);
	else if (ft_strequ(cmd, "rrr"))
		ft_rotate_dwn_rr(a, b);
	if (!ft_strequ(cmd, "ok"))
		ft_putendl(cmd);
}
