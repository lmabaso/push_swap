/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_double_ptr_len.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmabaso <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 16:00:14 by lmabaso           #+#    #+#             */
/*   Updated: 2018/08/22 16:01:35 by lmabaso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_double_ptr_len(void **str)
{
	size_t	count;

	count = 0;
	while (str[count])
		count++;
	return (count);
}
