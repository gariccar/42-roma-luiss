/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gariccar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 12:21:13 by gariccar          #+#    #+#             */
/*   Updated: 2024/12/22 12:21:16 by gariccar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*little == 0)
		return ((char *)big);
	while (*big != 0 && i < len)
	{
		j = 0;
		while (big[j] == little [j] && little[j] != 0 && i + j < len)
			j ++;
		if (little[j] == 0)
			return ((char *)big);
		if (i + j == len)
			break ;
		big ++;
		i ++;
	}
	return (NULL);
}
/*
int	main()
{
	printf("%p\n", ft_strnstr("mannaggia quel porco di dio", "quel", 28));
	printf("%p\n", ft_strnstr("banano", "", 6));
	printf("%p\n", ft_strnstr("io sono fortissimo", "banana", 18));
}*/
