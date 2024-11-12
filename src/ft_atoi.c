/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yevkahar <yevkahar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 14:18:53 by yevkahar          #+#    #+#             */
/*   Updated: 2024/11/12 17:13:13 by yevkahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	result;
	int	sign;

	result = 0;
	sign = 1;
	while ((*str == 32) || (*str >= 9 && *str <= 13))
	{
		str++;
	}
	if (*str == '-')
		sign *= -1;
	else if (*str == '+')
		str++;
	while (*str >= 48 && *str <= 57)
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (result * sign);
}

// int	main(void)
// {
// 	const char *str1 = "  \t\n-12345";
// 	const char *str2 = "   +9876";
// 	const char *str3 = "42";
// 	const char *str4 = "   -000123";
// 	printf("Result 1: %d\n", ft_atoi(str1));
// 	printf("Result 2: %d\n", ft_atoi(str2));
// 	printf("Result 3: %d\n", ft_atoi(str3));
// 	printf("Result 4: %d\n", ft_atoi(str4));
// 	return (0);
// }