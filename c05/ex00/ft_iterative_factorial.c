/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gariccar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 16:44:10 by gariccar          #+#    #+#             */
/*   Updated: 2024/11/27 02:28:49 by gariccar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	f;
	int	fattoriale;

	if (nb >= 0)
	{
		if (nb == 1)
			return (1);
		f = 2;
		fattoriale = 1;
		while (f <= nb)
		{
			fattoriale = fattoriale * f;
			f ++;
		}
		return (fattoriale);
	}
	else
		return (0);
}
/*
int main ()
{
	printf("%d\n", ft_iterative_factorial(20));
}*/
