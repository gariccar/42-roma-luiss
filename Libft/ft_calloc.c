/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gariccar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 12:20:18 by gariccar          #+#    #+#             */
/*   Updated: 2024/12/22 12:24:06 by gariccar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdint.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	if (nmemb > SIZE_MAX / size)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == 0)
		return (NULL);
	ft_bzero(ptr, (nmemb * size));
	return (ptr);
}
/*
int	main()
{
	int	i;
	void	*ptr;

	i = 0;
	printf("%p\n", ft_calloc(0,  6));
	printf("%p\n", ft_calloc(SIZE_MAX, SIZE_MAX));
	ptr = ft_calloc(4, 4);
	while (*((char *)ptr) == 0 && i < 16)
	{	
		ptr ++;
		i ++;
	}
	if (i == 16)
		printf("%s\n", "tutto vuoto");
}*/	
