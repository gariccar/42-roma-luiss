/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gariccar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 02:23:07 by gariccar          #+#    #+#             */
/*   Updated: 2024/11/28 03:07:27 by gariccar         ###   ########.fr       */
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
	int	i;

	i = 1;
	if (argc >= 1)
	{
		while (argv[i] != NULL)
		{
			write (1, argv[i], ft_strlen(argv[i]));
			write(1, "\n", 1);
			i ++;
		}
	}
}
