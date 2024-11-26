/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yevkahar <yevkahar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 16:15:54 by yevkahar          #+#    #+#             */
/*   Updated: 2024/11/26 15:40:28 by yevkahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//checks  for  an alphabetic character; in the standard "C" locale
//it is equivalent to (isupper(c) || islower(c)).
//In some locales, there may be additional characters
//for which isalpha()  is  true—let‐ters
//which are neither uppercase nor lowercase.

#include "libft.h"

int	ft_isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
