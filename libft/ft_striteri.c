/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gariccar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 18:23:28 by gariccar          #+#    #+#             */
/*   Updated: 2025/01/20 19:41:40 by gariccar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i] != 0)
	{
		f(i, &s[i]);
		i ++;
	}
}
/*
void	upper(unsigned int i, char *s)
{
	s[i] = ft_toupper(s[i]);
}

int	main()
{
	char	s[] = "cazzo alato";

	ft_striteri(s, upper);
	printf("%s\n", s);
}*/
