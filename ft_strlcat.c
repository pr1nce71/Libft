/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yevkahar <yevkahar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 19:35:03 by yevkahar          #+#    #+#             */
/*   Updated: 2024/11/13 16:40:56 by yevkahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	deslen;
	unsigned int	srlen;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
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
