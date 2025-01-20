/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gariccar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 15:24:39 by gariccar          #+#    #+#             */
/*   Updated: 2024/12/17 17:54:31 by gariccar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <string.h>
#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (dest == NULL || src == NULL)
		return (dest);
	i = 0;
	while (i < n)
	{
		((char *)dest)[i] = ((char *)src)[i];
		i ++;
	}
	return (dest);
}
/*
int	main()
{
	char dst[11] = "hello ciao";
	size_t n = 2;

	char dsta[11] = "hello ciao";


	memcpy(dst, dst + 3, n);
	printf("%s\n", dst);
	ft_memcpy(dsta, dsta + 3, n);
	printf("%s\n", dsta);	 
}*/
