/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yevkahar <yevkahar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 17:55:04 by yevkahar          #+#    #+#             */
/*   Updated: 2024/11/26 15:16:35 by yevkahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//The bzero() function erases the data in the n bytes 
//of the memory starting at the location pointed to by s,
//by writing zeros (bytes containing '\0') to that area.

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*str;

	str = s;
	while (n > 0)
	{
		*str = 0;
		str++;
		n--;
	}
}
