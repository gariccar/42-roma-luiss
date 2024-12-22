/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gariccar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 02:55:07 by gariccar          #+#    #+#             */
/*   Updated: 2024/12/20 17:16:10 by gariccar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <libft.h>

size_t	cat(char *dest, char *src, size_t size, size_t i)
{
	while (*src != '\0' && i != size - 1)
	{
		*dest = *src;
		dest ++;
		src ++;
		i ++;
	}
	if (*src == '\0')
	{
		*dest = '\0';
		return (i);
	}
	else
	{
		*dest = '\0';
		return (i + strlen(src));
	}
}

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	size_t	i;

	i = 0;
	while (*dest != '\0' && i != size)
	{
		dest ++;
		i ++;
	}
	if (i == size)
		return (size + ft_strlen(src));
	return (cat(dest, src, size, i));
}
/*
int	main()
{
	
}
*/
