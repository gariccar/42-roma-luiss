/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gariccar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 02:55:07 by gariccar          #+#    #+#             */
/*   Updated: 2024/11/24 02:58:31 by gariccar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	mario(char *src)
{
	unsigned int	t;

	t = 0;
	while (*src != '\0')
	{
		src ++;
		t ++;
	}
	return (t);
}

unsigned int	pippo(char *dest, char *src, unsigned int size, unsigned int i)
{
	while (*src != '\0' && i != size - 1)
	{
		*dest = *src;
		dest ++;
		src ++;
		i ++;
	}
	if (*src == '\0')
	{
		*dest = '\0';
		return (i);
	}
	else
	{
		*dest = '\0';
		return (i + mario(src));
	}
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (*dest != '\0' && i != size)
	{
		dest ++;
		i ++;
	}
	if (i == size)
		return (size);
	return (pippo(dest, src, size, i));
}
/*
*/
