/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gariccar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 15:49:34 by gariccar          #+#    #+#             */
/*   Updated: 2024/11/14 14:57:10 by gariccar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_number(void)
{
	int	x;

	x = 48;
	while (x <= 57)
	{
		write(1, &x, 1);
		x++;
	}
}
/*
int main()
{
	ft_print_number();
}
*/
