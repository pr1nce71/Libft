/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yevkahar <yevkahar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 16:35:44 by yevkahar          #+#    #+#             */
/*   Updated: 2024/11/12 17:39:42 by yevkahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef libft.h
#define libft.h

#include <unistd.h>
#include <stdlib.h>


int	ft_atoi(const char *str);
void	ft_bzero(void *s, size_t n);
int	ft_isalnum(int c);
int	ft_isalpha(char str);
int	ft_isascii(int c);
int	ft_isdigit(int str);
int	ft_isprint(char str);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memset(void *b, int c, size_t len);
int	ft_strlen(char *str);


#endif