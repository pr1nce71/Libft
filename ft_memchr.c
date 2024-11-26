/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yevkahar <yevkahar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 14:00:09 by yevkahar          #+#    #+#             */
/*   Updated: 2024/11/26 14:16:22 by yevkahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//The  memchr()  function scans the initial n bytes of the memory area
//pointed to by s for the first instance of c.
//Both c and the bytes of the memory area pointed
//to by s are interpreted as unsigned char.

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (ptr[i] == (unsigned char)c)
			return ((void *)&ptr[i]);
		i++;
	}
	return (NULL);
}
