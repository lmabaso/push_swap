/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isnumber.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmabaso <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 15:56:28 by lmabaso           #+#    #+#             */
/*   Updated: 2018/08/22 15:57:32 by lmabaso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_int_len(int n)
{
	int len;

	len = !n;
	while (n)
	{
		len++;
		n /= 10;
	}
	return (len);
}

int		ft_isnumber(char *str)
{
	int len;
	int n;

	n = ft_atoi(str);
	len = ft_strlen(str);
	len = (str[0] == '-' || str[0] == '+') ? len + -1 : len;
	if ((n < 0 && !ft_strchr(str, '-')) || (n > 0 && ft_strchr(str, '-')))
		return (0);
	if (ft_isdigit(str[0]) || str[0] == '-' || str[0] == '+')
	{
		if (len != ft_int_len(ft_atoi(str)))
			return (0);
	}
	else
		return (0);
	return (1);
}
