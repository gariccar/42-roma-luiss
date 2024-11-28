/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gariccar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 23:45:49 by gariccar          #+#    #+#             */
/*   Updated: 2024/11/18 23:46:16 by gariccar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
/*
int main ()
{
	int	*a;
	int 	*b;
	int	c;
	int	d;

	a = &c;
	b = &d;
	*a = 8;
	*b = 3;	
	ft_ultimate_div_mod(a, b);
	printf("div = %d mod = %d", c, d);
}
*/
