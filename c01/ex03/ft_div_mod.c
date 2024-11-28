/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gariccar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 23:07:55 by gariccar          #+#    #+#             */
/*   Updated: 2024/11/18 23:08:01 by gariccar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int main  ()
{
	int	a;
	int	b;

	int	c;
	int	d;
	

	a = 8;
	b = 4;

	ft_div_mod (a, b, &c, &d);

	printf("div = %d mod = %d \n", c, d);
}
*/
