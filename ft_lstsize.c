/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yevkahar <yevkahar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 15:13:20 by yevkahar          #+#    #+#             */
/*   Updated: 2024/11/28 16:37:47 by yevkahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Counts the number of nodes in a list.

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	counter;

	counter = 0;
	while (lst)
	{
		lst = lst ->next;
		counter++;
	}
	return (counter);
}
