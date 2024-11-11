/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yevkahar <yevkahar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 16:15:54 by yevkahar          #+#    #+#             */
/*   Updated: 2024/11/11 17:37:38 by yevkahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_isalpha(char str)
{
	if (str >= 'a' && str <= 'z')
	{
		return (1);
	}
	else if (str >= 'A' && str <= 'Z')
	{
		return (1);
	}
	else
		return (0);
}