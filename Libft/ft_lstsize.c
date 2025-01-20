#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst != 0)
	{
		i ++;
		lst = lst->next;
	}
	return (i);
}
