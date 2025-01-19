#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*temp;
	t_list	*head;

	if (!lst)
		return (0);
	new = malloc(sizeof(t_list) * ft_lstsize(lst));
	head = new;
	if (!new)
		return (0);
	while (lst)
	{
		temp = lst->next;
		new = f(lst);
		new = new->next;
		ft_lstdelone(lst, del);
		lst = temp;
	}
	return (head);
}
