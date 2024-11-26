/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yevkahar <yevkahar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 17:34:38 by yevkahar          #+#    #+#             */
/*   Updated: 2024/11/26 14:18:00 by yevkahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//The memset() function fills the first n bytes of the memory
//area pointed to by s with the constant byte c.

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*tmp;

	tmp = (unsigned char *)b;
	while (len--)
		*tmp++ = (unsigned char)c;
	return (b);
}
