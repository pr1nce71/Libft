/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yevkahar <yevkahar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 15:39:55 by yevkahar          #+#    #+#             */
/*   Updated: 2024/11/13 15:39:57 by yevkahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int main() {
	const char *someint = "-22432";

	int number =  ft_atoi(someint);
	printf("Result of ft_atoi: %d\n", number);
}