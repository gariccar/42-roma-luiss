/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gariccar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 23:05:38 by gariccar          #+#    #+#             */
/*   Updated: 2024/11/21 00:02:24 by gariccar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	while (*str != '\0')
	{
		if (!(*str >= '0' && *str <= '9'))
			return (0);
		else
			str ++;
	}
	return (1);
}
/*
int	main(void)
{
	char	*str;

	str = "74445";
	ft_str_is_numeric(str);
	printf("%d", ft_str_is_numeric(str));
}*/
