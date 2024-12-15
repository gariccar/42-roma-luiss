/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gariccar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 04:14:04 by gariccar          #+#    #+#             */
/*   Updated: 2024/11/27 04:21:29 by gariccar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	n;
	int	result;

	n = 1;
	result = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (n <= power)
	{
		result = result * nb;
		n ++;
	}
	return (result);
}
/*
int	main()
{
	printf("%d\n", ft_iterative_power(2, 6));
}*/
