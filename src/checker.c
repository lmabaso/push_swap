/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmabaso <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/21 14:11:59 by lmabaso           #+#    #+#             */
/*   Updated: 2018/08/23 10:55:06 by lmabaso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"
#include <fcntl.h>

char		*valid_arg(char *arg)
{
	if (ft_strequ(arg, "sa"))
		return ("sa");
	if (ft_strequ(arg, "sb"))
		return ("sb");
	if (ft_strequ(arg, "ss"))
		return ("ss");
	if (ft_strequ(arg, "ra"))
		return ("ra");
	if (ft_strequ(arg, "rb"))
		return ("rb");
	if (ft_strequ(arg, "pa"))
		return ("pa");
	if (ft_strequ(arg, "pb"))
		return ("pb");
	if (ft_strequ(arg, "rr"))
		return ("rr");
	if (ft_strequ(arg, "rrr"))
		return ("rrr");
	if (ft_strequ(arg, "rra"))
		return ("rra");
	if (ft_strequ(arg, "rrb"))
		return ("rrb");
	if (ft_strequ(arg, "rra"))
		return ("rra");
	return (NULL);
}

void		ft_update2(t_list **a, t_list **b, char *cmd)
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
}

static int	getcmd(t_list **a, t_list **b)
{
	char	*line;

	line = NULL;
	while (get_next_line(0, &line) > 0)
	{
		ft_update2(a, b, valid_arg(line));
		if (line && !valid_arg(line))
		{
			ft_putendl("error");
			free(line);
			return (0);
		}
		free(line);
	}
	ft_putendl(ft_isdone(a, b) ? "OK" : "KO");
	return (0);
}

int			main(int ac, char **av)
{
	t_list	*a;
	t_list	*b;

	init_check(ac, av, &a, &b);
	getcmd(&a, &b);
	ft_lstfree(&a);
	ft_lstfree(&b);
	return (0);
}
