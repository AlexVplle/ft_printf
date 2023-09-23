/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avapaill <avapaill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 14:49:21 by avapaill          #+#    #+#             */
/*   Updated: 2022/11/12 14:49:39 by avapaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static void	del_linked_list(t_list *current_node, void (*del)(void *))
{
	t_list	*previous_node;

	while (current_node)
	{
		previous_node = current_node;
		ft_lstdelone(previous_node, del);
		current_node = current_node->next;
	}
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*first_node;
	t_list	*current_node;

	if (!lst || !f || !del)
		return ((void *) 0);
	current_node = ft_lstnew((*f)(lst->content));
	if (!current_node)
		return ((void *) 0);
	first_node = current_node;
	lst = lst->next;
	while (lst)
	{
		current_node->next = ft_lstnew((*f)(lst->content));
		if (!current_node)
		{
			del_linked_list(current_node, del);
			return ((void *) 0);
		}
		current_node = current_node->next;
		lst = lst->next;
	}
	return (first_node);
}
