/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gariccar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 16:51:18 by gariccar          #+#    #+#             */
/*   Updated: 2024/11/20 23:29:30 by gariccar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
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
	char	dest [6];
	ft_strcpy(dest, "pippo");
	write(1, dest, 6);

}*/
