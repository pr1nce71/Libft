/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yevkahar <yevkahar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 16:26:54 by yevkahar          #+#    #+#             */
/*   Updated: 2024/11/26 15:40:17 by yevkahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//checks for an alphanumeric character;
//it is equivalent to (isalpha(c) || isdigit(c)).

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 48 && c <= 57) || (c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
