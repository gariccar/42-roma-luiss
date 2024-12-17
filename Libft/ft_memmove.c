/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gariccar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 18:01:36 by gariccar          #+#    #+#             */
/*   Updated: 2024/12/17 22:10:02 by gariccar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int	i;

	if (dest == NULL || src == NULL)
		return (dest);	
	i = 0;
	if (dest > src)
	{
		i = n-1;
		while (i >= 0)
		{
			((char *)dest)[i] = ((char *)src)[i];
			i --;
		}
	}
	else
	{
		while (i < (int)n)
		{
			((char *)dest)[i] = ((char *)src)[i];
			i ++;
		}
	}
	return (dest);
}
/*
int	main()
{
	char *src = "tttt";
	char dst[11] = "hello ciao";
	size_t n = 2;

	char *srca = "tttt";
	char dsta[11] = "hello ciao";


	//memmove(NULL, dst + 3, n);
	//printf("%s\n", dst);
	ft_memmove(NULL, dsta + 3, n);
	printf("%s\n", dsta);	 
}*/
