/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yevkahar <yevkahar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 13:59:55 by yevkahar          #+#    #+#             */
/*   Updated: 2024/11/26 15:20:19 by yevkahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//The calloc() function allocates memory for an array of nmemb elements
//of size bytes each and returns a pointer to the allocated memory.
//The memory is set to zero. If nmemb or size is 0,
//then calloc() returns either NULL, or a unique pointer value
//that can later be successfully passed to free().

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
