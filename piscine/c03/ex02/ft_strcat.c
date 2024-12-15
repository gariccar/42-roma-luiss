/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gariccar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 16:51:00 by gariccar          #+#    #+#             */
/*   Updated: 2024/11/24 23:57:33 by gariccar         ###   ########.fr       */
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
	*dest = '\0';
	return (dest - i);
}
/*
int	main(void)
{
}
*/
