/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gariccar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 01:19:07 by gariccar          #+#    #+#             */
/*   Updated: 2024/11/24 02:01:45 by gariccar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;

	i = 0;
	if (*to_find != '\0')
	{
		while (*str != '\0')
		{
			i = 0;
			while (to_find[i] != '\0' && str[i] == to_find[i])
			{
				i ++;
			}
			if (to_find[i] == '\0')
				return (str);
			str ++;
		}
		return (NULL);
	}
	else
		return (str);
}
/*
int main ()
{
	printf("%s", ft_strstr("mannaggia quel dio", "nag"));

}*/
