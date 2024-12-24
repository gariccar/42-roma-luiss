/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gariccar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 02:04:03 by gariccar          #+#    #+#             */
/*   Updated: 2024/12/22 12:10:52 by gariccar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(char *str)
{
	size_t	lunghezza;

	lunghezza = 0;
	while (*str != '\0')
	{
		str ++;
		lunghezza ++;
	}
	return (lunghezza);
}
