/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yevkahar <yevkahar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 19:35:03 by yevkahar          #+#    #+#             */
/*   Updated: 2024/11/21 13:59:06 by yevkahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	deslen;
	unsigned int	srlen;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	deslen = i;
	srlen = ft_strlen(src);
	if (size == 0 || size <= deslen)
		return (size + srlen);
	while (src[j] != '\0' && j < size - deslen - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (deslen + srlen);
}
