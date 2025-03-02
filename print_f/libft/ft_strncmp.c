/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gariccar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 20:00:25 by gariccar          #+#    #+#             */
/*   Updated: 2025/01/20 18:55:40 by gariccar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (n == 0)
		return (0);
	i = 0;
	while (i < n && s1[i] != 0)
	{
		if (s1[i] == s2[i])
			i ++;
		else
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	}
	if (i < n)
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	else
		return (0);
}

/*
int	main()
{
	int c = '\200';
	printf("%d\n\n", c);

	printf("%d\n", ft_strncmp("test\200", "test\0", 6));
	printf("%d\n", ft_strncmp("banana", "banano", 6));
	printf("%d\n", ft_strncmp("banano", "banana", 6));
	printf("%d\n", ft_strncmp("bana", "banana", 6));
	printf("%d\n", ft_strncmp("banano", "bana", 6));
	printf("%d\n", ft_strncmp("banano", "", 6));
}*/
