/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gariccar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 18:24:23 by gariccar          #+#    #+#             */
/*   Updated: 2025/01/20 19:16:40 by gariccar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	int		i;
	int		j;

	if (!s1 || !s2)
		return (NULL);
	i = 0;
	j = 0;
	ptr = ft_calloc((ft_strlen((char *)s1) + ft_strlen((char *)s2) + 1), 1);
	if (!ptr)
		return (NULL);
	while (s1[i] != 0)
	{
		ptr[i] = s1[i];
		i ++;
	}
	while (s2[j] != 0)
	{
		ptr[i] = s2[j];
		i ++;
		j ++;
	}
	return (ptr);
}
/*
int	main()
{
	printf("%s\n", ft_strjoin("domani andiamo", " al supermercato"));
}*/
