/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yevkahar <yevkahar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 16:20:15 by yevkahar          #+#    #+#             */
/*   Updated: 2024/11/28 16:12:28 by yevkahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Iterates the list ’lst’ and applies the function
//’f’ on the content of each node.

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	f (lst ->content);
	lst = lst ->next;
}
