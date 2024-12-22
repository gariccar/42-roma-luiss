/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gariccar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 12:20:47 by gariccar          #+#    #+#             */
/*   Updated: 2024/12/22 12:20:50 by gariccar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (*((unsigned char *)s) != c && i < n)
	{
		s ++;
		i ++;
	}
	if (*((unsigned char *)s) == c)
		return ((void *)s);
	else
		return (NULL);
}
