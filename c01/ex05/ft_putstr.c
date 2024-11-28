/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gariccar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 00:19:37 by gariccar          #+#    #+#             */
/*   Updated: 2024/11/24 19:51:41 by gariccar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str ++;
	}
}
/*
int main ()
{
	char *str;
	str = "ydeuywwurkutgtr5euutryrtdetrtret";
	ft_putstr(str);
}i*/

/*
int main(int argc, char **argv)
{
	if (argc > 1)
		ft_putstr(argv[1]);
	else ft_putstr("pippo\n");
}*/
