/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gariccar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 02:23:07 by gariccar          #+#    #+#             */
/*   Updated: 2024/11/28 02:28:33 by gariccar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	n;

	n = 0;
	while (*str != '\0')
	{
		str ++;
		n ++;
	}
	return (n);
}

int	main(int argc, char **argv)
{
	if (argc > 0)
		write (1, argv[0], ft_strlen(argv[0]));
	write(1, "\n", 1);
}
