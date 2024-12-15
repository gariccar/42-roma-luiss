/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gariccar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 15:28:28 by gariccar          #+#    #+#             */
/*   Updated: 2024/11/20 18:41:25 by gariccar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i != n && *src != '\0')
	{
		*dest = *src;
		src ++;
		dest ++;
		i ++;
	}
	if (i != n)
	{
		while (i != n)
		{
			*dest = '\0';
			dest ++;
			i ++;
		}
	}
	return (dest - i);
}
/*
int	main(void)
{
	char	dest [15];

	ft_strncpy(dest, "grifone\0aaa ", 12);
	write(1, dest, 12);
}*/
