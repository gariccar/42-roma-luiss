/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gariccar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 15:28:16 by gariccar          #+#    #+#             */
/*   Updated: 2024/11/26 15:43:28 by gariccar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putbase(long int n, int base, char *str)
{
	int	b;

	if (n == 0)
		return ;
	ft_putbase(n / base, base, str);
	b = n % base;
	str = str + b;
	write (1, str, 1);
}

int	baselen(char *base)
{
	int	i;

	i = 0;
	while (*base != '\0')
	{
		base ++;
		i ++;
	}
	return (i);
}

int	checkbase(char *base)
{
	char	*temp ;
	int		len;

	len = baselen(base);
	if (len < 2)
		return (0);
	while (*base != '\0')
	{
		if (*base == '+' || *base == '-')
			return (0);
		temp = base + 1;
		while (*temp != '\0')
		{
			if (*base == *temp)
				return (0);
			temp ++;
		}
		base ++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	n;
	int		len;

	if (checkbase(base) == 0)
		return ;
	n = nbr;
	if (n < 0)
	{
		n = -n;
		write(1, "-", 1);
	}
	len = baselen(base);
	if (n == 0)
		write(1, "0", 1);
	else
	{
		ft_putbase(n, len, base);
	}
}
/*
int	main(void)
{
	ft_putnbr_base(2147483647, "0123456789abcdef");
	write(1, "\n", 1);
	ft_putnbr_base(-2147483648, "01");
	write(1, "\n", 1);
	ft_putnbr_base(-42, "0123456789");
	write(1, "\n", 1);
	return (0);
}*/
