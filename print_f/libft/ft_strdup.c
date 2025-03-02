/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gariccar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 12:21:37 by gariccar          #+#    #+#             */
/*   Updated: 2024/12/22 12:21:39 by gariccar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	char	*ptr;

	i = 0;
	if (s == NULL)
		return (NULL);
	ptr = malloc(ft_strlen(s) + 1);
	if (ptr == NULL)
		return (NULL);
	while (s[i] != 0)
	{
		ptr[i] = s[i];
		i ++;
	}
	ptr[i] = 0;
	return (ptr);
}
/*
int	main()
{
	printf("%s\n", ft_strdup("sono una principessa"));
}*/
