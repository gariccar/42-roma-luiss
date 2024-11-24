/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gariccar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 14:11:00 by gariccar          #+#    #+#             */
/*   Updated: 2024/11/21 15:25:18 by gariccar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n != 0)
	{
		while ((i < (n -1)) && (*s1 != '\0' && *s2 != '\0'))
		{
			if (*s1 != *s2)
				return (*s1 - *s2);
			s1 ++;
			s2 ++;
			i ++;
		}
		return (*s1 - *s2);
	}
	return (0);
}
/*
int	main(void)
{
	printf("%d\n", ft_strncmp("cavallo", "cavb", 3));
}*/
