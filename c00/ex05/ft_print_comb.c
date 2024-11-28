/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gariccar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 12:50:08 by gariccar          #+#    #+#             */
/*   Updated: 2024/11/14 14:18:48 by gariccar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	marcello(char x)
{
	char	y;
	char	z;

	y = '0';
	while (y <= '9')
	{
		z = '0';
		while (z <= '9')
		{
			if (x < y && y < z)
			{
				write(1, &x, 1);
				write(1, &y, 1);
				write(1, &z, 1);
				if (x != '7' )
					write(1, ", ", 2);
			}
			z++;
		}
		y++;
	}
}

void	ft_print_comb(void)
{
	char	x;

	x = '0';
	while (x <= '9')
	{
		marcello(x);
		x++;
	}
}
/*
int	main ()

{
	ft_print_comb();
}
*/
