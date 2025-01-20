/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gariccar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 18:30:26 by gariccar          #+#    #+#             */
/*   Updated: 2025/01/20 19:49:34 by gariccar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	wordcount(char const *s, char c)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s[i] != 0)
	{
		if (s[i] == c)
			i ++;
		else
		{
			while (s[i] != c && s[i] != 0)
				i ++;
			j ++;
		}
	}
	return (j);
}

char	*stralloc(char const *s, char c, size_t i)
{
	unsigned int	t;
	size_t			j;

	j = 0;
	t = i;
	while (s[i] != c && s[i] != 0)
	{
		i ++;
		j ++;
	}
	return (ft_substr(s, t, j));
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	len;
	char	**ptr;

	if (!s)
		return (NULL);
	i = 0;
	j = 0;
	len = wordcount(s, c);
	ptr = malloc((len + 1) * 8);
	if (!ptr)
		return (NULL);
	while (j < len)
	{
		while (s[i] != 0 && s[i] == c)
			i ++;
		ptr[j] = stralloc(s, c, i);
		i += ft_strlen(ptr[j]);
		j ++;
	}
	ptr[j] = 0;
	return (ptr);
}
/*
int	main()
{
	char	**result;

	result = ft_split("", 'a');
	while (*result)
	{
		printf("'%s'\n", *result);
		result	++;
	}
}*/
