/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yevkahar <yevkahar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 15:13:56 by yevkahar          #+#    #+#             */
/*   Updated: 2024/11/28 16:20:23 by yevkahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Returns the last node of the list.

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst ->next)
		lst = lst ->next;
	return (lst);
}
