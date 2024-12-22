/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gariccar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 20:00:25 by gariccar          #+#    #+#             */
/*   Updated: 2024/12/21 20:00:30 by gariccar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && s1[i] != 0)
	{
		if (s1[i] == s2[i])
			i ++;
		else
			return (s1[i] - s2[i]);
	}
	return (s1[i] - s2[i]);
}
/*
int	main()
{
	printf("%d\n", ft_strncmp("banana", "banana", 6));
	printf("%d\n", ft_strncmp("banana", "banano", 6));
	printf("%d\n", ft_strncmp("banano", "banana", 6));
	printf("%d\n", ft_strncmp("bana", "banana", 6));
	printf("%d\n", ft_strncmp("banano", "bana", 6));
	printf("%d\n", ft_strncmp("banano", "", 6));
}*/
