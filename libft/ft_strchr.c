/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gariccar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 18:04:01 by gariccar          #+#    #+#             */
/*   Updated: 2024/12/21 20:04:17 by gariccar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	c = (char) c;
	while (*s != c && *s != 0)
	{
		s ++;
	}
	if (*s == 0)
	{
		if (c == 0)
			return ((char *)s);
		else
			return (NULL);
	}
	return ((char *)s);
}
