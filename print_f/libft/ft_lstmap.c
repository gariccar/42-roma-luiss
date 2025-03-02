/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gariccar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 18:23:59 by gariccar          #+#    #+#             */
/*   Updated: 2025/01/20 21:28:20 by gariccar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*temp;
	t_list	*head;

	if (!lst || !f || !del)
		return (0);
	new = ft_lstnew(f(lst->content));
	if (!new)
		return (NULL);
	head = new;
	temp = lst->next;
	while (temp)
	{
		new->next = ft_lstnew(f(temp->content));
		if (!new->next)
		{
			ft_lstclear(&head, del);
			return (NULL);
		}
		new = new->next;
		temp = temp->next;
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
