/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gariccar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 23:43:36 by gariccar          #+#    #+#             */
/*   Updated: 2024/11/26 00:15:08 by gariccar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	segno;
	int	risultato;

	segno = 1;
	risultato = 0;
	if (*str != '-' && *str != '+' && (!(*str >= 48 && *str <= 57)))
		return (0);
	if (*str == '-')
	{
		segno = -segno;
		str ++;
	}
	while (*str >= '0' && *str <= '9')
	{
		risultato = risultato * 10 + (*str - '0');
		str ++;
	}
	return (risultato * segno);
}
/*
int	main(void)
{
        printf("%d\n", ft_atoi("-234ab567"));
        printf("%d\n", ft_atoi("a23"));
        printf("%d\n", ft_atoi("-1245e54"));
        printf("%d\n", ft_atoi("1254%353"));
}*/
