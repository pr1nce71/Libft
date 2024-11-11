/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yevkahar <yevkahar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 17:59:34 by yevkahar          #+#    #+#             */
/*   Updated: 2024/11/11 18:47:59 by yevkahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (dest == NULL & src == NULL)
		return (0);
	i = -1;
	while (++i < n)
	{
		((char *)dest)[i] = ((char *)src)[i];
	}
	return (dest);
}
