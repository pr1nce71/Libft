/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yevkahar <yevkahar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 16:30:51 by yevkahar          #+#    #+#             */
/*   Updated: 2024/11/26 15:40:43 by yevkahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//checks whether c is a 7-bit unsigned char value
//that fits into the ASCII character set.

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}
