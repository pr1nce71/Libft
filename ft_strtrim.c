/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yevkahar <yevkahar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 11:00:06 by yevkahar          #+#    #+#             */
/*   Updated: 2024/11/20 11:57:38 by yevkahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isset(char c, const char *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

static void	find_trim(const char *s1, const char *set,
							size_t *start, size_t *end)
{
	*start = 0;
	while (s1[*start] && ft_isset(s1[*start], set))
		(*start)++;
	*end = ft_strlen(s1);
	if (*end > 0)
		(*end)--;
	while (*end > *start && ft_isset(s1[*end], set))
		(*end)--;
}

char	*ft_strstrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	len;
	char	*trimmed;
	size_t	i;

	if (!s1 || !set)
		return (NULL);
	find_trim(s1, set, &start, &end);
	if (end < start)
	{
		trimmed = (char *)malloc(1);
		if (trimmed)
			trimmed[0] = '\0';
		return (trimmed);
	}
	len = end - start + 1;
	trimmed = (char *)malloc(len + 1);
	if (!trimmed)
		return (NULL);
	i = 0;
	while (i < len)
	{
		trimmed[i] = s1[start + i];
		i++;
	}
	trimmed[len] = '\0';
	return (trimmed);
}
