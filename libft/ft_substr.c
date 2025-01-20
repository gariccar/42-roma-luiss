/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gariccar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 18:28:30 by gariccar          #+#    #+#             */
/*   Updated: 2025/01/20 19:13:25 by gariccar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		j;
	char		*ptr;
	size_t		l;

	if (s == NULL)
		return (NULL);
	l = ft_strlen(s);
	j = 0;
	if (l <= start)
		return (ft_strdup(""));
	if (ft_strlen(s + start) <= len)
		return (ft_strdup(s + start));
	ptr = ft_calloc(len + 1, 1);
	if (!ptr)
		return (NULL);
	while (j < len && s[start] != 0)
	{
		ptr[j] = s[start];
		start ++;
		j ++;
	}
	return (ptr);
}
/*
int	main()
{
	printf("%s\n", ft_substr("ciao bel ragazzo", 5, 3));
}*/
