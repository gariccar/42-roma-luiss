#include "libft.h"
/*
char	upper(unsigned int i, char s)
{	
	i = 0;
	return (ft_toupper(s- i));
}
*/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	unsigned int	len;
	char			*ptr;

	i = 0;
	len = ft_strlen((char *)s);
	ptr = ft_calloc(len + 1, 1);
	while (s[i] != 0)
	{
		ptr[i] = f(i, s[i]);
		i ++;
	}
	return (ptr);
}
/*
int	main()
{
	printf("%s\n", ft_strmapi("Porco Cristo DiO",upper));
}*/
