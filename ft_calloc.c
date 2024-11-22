/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yevkahar <yevkahar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 13:59:55 by yevkahar          #+#    #+#             */
/*   Updated: 2024/11/22 19:20:06 by yevkahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	size_t	total_size;
	void	*ptr;
	size_t	i;

	total_size = num * size;
	ptr = malloc(total_size);
	if (!ptr)
		return (NULL);
	i = 0;
	while (i < total_size)
		((unsigned char *)ptr)[i++] = 0;
	return (ptr);
}
