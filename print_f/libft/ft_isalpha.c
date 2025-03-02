/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gariccar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 15:25:49 by gariccar          #+#    #+#             */
/*   Updated: 2024/12/17 15:25:55 by gariccar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
/*
int	main()
{
	printf("%d\n", ft_isalpha(6));
	printf("%d\n", ft_isalpha(76));
	printf("%d\n", ft_isalpha(106));
	printf("%d\n", ft_isalpha(166));	
}*/
