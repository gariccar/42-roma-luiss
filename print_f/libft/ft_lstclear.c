/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gariccar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 18:30:50 by gariccar          #+#    #+#             */
/*   Updated: 2025/01/20 19:54:59 by gariccar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*ne;

	if (!lst || !*lst || !del)
		return ;
	while (*lst)
	{
		ne = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = ne;
	}
}
