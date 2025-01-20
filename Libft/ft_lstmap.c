#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*temp;
	t_list	*head;

	if (!lst)
		return (0);
	new = malloc(sizeof(t_list));
	head = new;
	while (lst && new)
	{
		new->content = f(lst->content);
		if (lst->next == 0)
		{
			new->next = 0;
			return (head);
		}
		temp = lst->next;
		new->next = malloc(sizeof(t_list));
		if (!new->next)
			return (head);
		new = new->next;
		ft_lstdelone(lst, del);
		lst = temp;
	}
	return (head);
}

/*
char    *ft_strupcase(char *str)
{
        int     i;

        i = 0;
        while (*str != '\0')
        {
                if (*str >= 'a' && *str <= 'z')
                        *str = *str - 32;
                str ++;
                i ++;
        }
        return (str - i);
}

void nulla(void * qualcosa) {
	(void)qualcosa;
}

void stampa(void *cristo)
{
	printf("cristo sta a %p\n", cristo); 
	puts((char*)cristo);
}

int	main()
{
	t_list	*head;
	t_list	*list;

	list = ft_lstnew(ft_strdup("pippo"));
	ft_lstadd_back(&head, list);
	list->next = ft_lstnew(ft_strdup("paperino"));
	list->next->next = ft_lstnew(ft_strdup("topolino"));
	head = ft_lstmap(head, (void*(*)(void *))ft_strupcase, nulla);
	ft_lstiter(head, stampa);
}*/
