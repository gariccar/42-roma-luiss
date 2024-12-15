/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gariccar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 02:04:03 by gariccar          #+#    #+#             */
/*   Updated: 2024/11/19 02:07:14 by gariccar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	lunghezza;

	lunghezza = 0;
	while (*str != '\0')
	{
		str ++;
		lunghezza ++;
	}
	return (lunghezza);
}