/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gariccar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 16:51:00 by gariccar          #+#    #+#             */
/*   Updated: 2024/11/21 17:20:49 by gariccar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;

	i = 0;
	while (*dest != '\0')
	{
		dest ++;
		i ++;
	}
	
	while (*src != '\0')
	{
		*dest = *src;
		src ++;
		dest ++;
		i ++;
	}
	//dest ++;
	//i ++;
	*dest = '\0';
	return (dest - i);
}
/*
int	main(void)
{
	char d1[] = "ZoAmOUxdKZGInZtyV\0AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAnMipqXTQNOVjZdziHxMiXeU";
	char s1[] = " dKZGInZtyVnMipqXTQNOVjZdziHxMiXeU";

	char d2[128] = "FhjmxrnYQZZpzyktXarZuWJTSYWlKnbttXUEbpRNctxpuWkcvkpd";
	char s2[] = " xpuWkcvkpd";

	char dest[128] = "iYVkRImWIukgZfHkcsZBiexyMbLVqzeedkxENEWUlwjL";
	char src[] = " ZBiexyMbLVqzeedkxENEWUlwjL";


	printf("%s%s\n\n", d1, s1);

	printf("%s\n\n", ft_strcat(d1, s1));
	printf("%s\n\n", d1);
	puts("-----------------------------------------------------");

	printf("%s%s\n\n", d2, s2);

	printf("%s\n\n", ft_strcat(d2, s2));
	printf("%s\n\n", d2);
	puts("-----------------------------------------------------");
	printf("%s%s\n\n", dest, src);

	printf("%s\n\n", ft_strcat(dest, src));
	printf("%s\n\n", dest);
	char *p = 0;
	//p = ft_strcat(dest, "");
	p = ft_strcat(dest, " ");
	p = ft_strcat(dest, "ZBiexyMbLVqzeedkxENEWUlwjL");
	printf("%s\n", p);
	printf("%s\n", dest);

	puts("-----------------------------------------------------");

}
*/
