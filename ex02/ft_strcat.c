/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gariccar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 16:51:00 by gariccar          #+#    #+#             */
/*   Updated: 2024/11/21 17:20:49 by gariccar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;

	i = 0;
	while (*dest != '\0')
	{
		dest ++;
		i ++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		src ++;
		dest ++;
		i ++;
	}
	dest ++;
	i ++;
	*dest = '\0';
	return (dest - i);
}
/*
int	main(void)
{
	char dest[10] = "ciao";

	printf("%s\n", ft_strcat(dest, "mondo"));
}*/
