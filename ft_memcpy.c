/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yevkahar <yevkahar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 17:59:34 by yevkahar          #+#    #+#             */
/*   Updated: 2024/11/26 14:20:41 by yevkahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//The memcpy() function copies n bytes from memory area src to memory area dest.
//The memory areas must not
//overlap. Use memmove(3) if the memory areas do overlap.

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (dest == NULL & src == NULL)
		return (0);
	i = -1;
	while (++i < n)
		((char *)dest)[i] = ((char *)src)[i];
	return (dest);
}
