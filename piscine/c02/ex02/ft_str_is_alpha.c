/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gariccar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 21:16:31 by gariccar          #+#    #+#             */
/*   Updated: 2024/11/20 21:20:41 by gariccar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	while (*str != '\0')
	{
		if (!((*str >= 'A' && *str <= 'Z') || (*str >= 'a' && *str <= 'z' )))
			return (0);
		else
			str++;
	}
	return (1);
}
/*
int main (void)
{
	char *str;

	str ="jfrytfhtftyd1ftft";
	ft_str_is_alpha(str);
	printf("%d", ft_str_is_alpha(str));
}*/
