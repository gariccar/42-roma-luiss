/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gariccar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 15:27:48 by gariccar          #+#    #+#             */
/*   Updated: 2024/12/17 15:27:50 by gariccar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}
/*
int	main()
{
	printf("%d\n", ft_isascii(4));
	printf("%d\n", ft_isascii(199));
	printf("%d\n", ft_isascii(-1));
	printf("%d\n", ft_isascii(128));
}*/
