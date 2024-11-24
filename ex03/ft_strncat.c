/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gariccar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 17:35:59 by gariccar          #+#    #+#             */
/*   Updated: 2024/11/24 03:01:48 by gariccar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	t;

	i = 0;
	t = 0;
	while (*dest != '\0')
	{
		dest ++;
		i ++;
	}
	while ((t < nb) && (*src != '\0'))
	{
		*dest = *src;
		src ++;
		dest ++;
		i ++;
		t ++;
	}
	dest ++;
	i ++;
	*dest = '\0';
	return (dest - i);
}
/*
int	main(void)
{
	char	dest[15] = "Hello";
	printf("%s\n", ft_strncat(dest, "World", 2));
}*/
