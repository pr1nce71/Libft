/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yevkahar <yevkahar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 19:35:08 by yevkahar          #+#    #+#             */
/*   Updated: 2024/11/26 15:41:53 by yevkahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//The memmove() function copies n bytes from memory area
//src to memory area dest.
//The memory areas may over‐lap: copying takes place
//as though the bytes in src are first copied
//into a temporary array that  does  not overlap src or dest,
//and the bytes are then copied from the temporary array to dest.

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*tmp_dest;
	const unsigned char	*tmp_src;

	tmp_dest = (unsigned char *)dest;
	tmp_src = (const unsigned char *)src;
	if (tmp_dest == tmp_src)
		return (dest);
	else if (tmp_dest < tmp_src)
	{
		while (n--)
			*tmp_dest++ = *tmp_src++;
	}
	else
	{
		tmp_dest += n - 1;
		tmp_src += n - 1;
		while (n--)
			*tmp_dest-- = *tmp_src--;
	}
	return (dest);
}
