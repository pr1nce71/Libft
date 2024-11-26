/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yevkahar <yevkahar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 14:21:46 by yevkahar          #+#    #+#             */
/*   Updated: 2024/11/26 15:30:53 by yevkahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//The strlen() function calculates the length of the string pointed to by s,
//excluding the terminating null byte ('\0').

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
