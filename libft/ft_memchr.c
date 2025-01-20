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

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (*((unsigned char *)s) != (c & 0xff) && i < n)
	{
		s ++;
		i ++;
	}
	if (i < n)
		return ((void *)s);
	else
		return (NULL);
}
