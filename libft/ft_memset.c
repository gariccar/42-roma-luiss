/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gariccar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 15:26:58 by gariccar          #+#    #+#             */
/*   Updated: 2024/12/20 17:21:06 by gariccar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;

	if (s == NULL)
		return (NULL);
	i = 0;
	while (i < n)
	{
		((char *)s)[i] = c;
		i ++;
	}
	return (s);
}
/*
int	main()
{
	char p[6];
	ft_memset(p, 'A', 5);
	p[5] = 0;
	write(1, p, 6);
}*/
