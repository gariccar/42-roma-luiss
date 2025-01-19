#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*ne;

	if (!*lst)
		return ;
	while (*lst)
	{
		ne = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = ne;
	}
}
