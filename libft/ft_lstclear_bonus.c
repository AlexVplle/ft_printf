/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avapaill <avapaill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 14:25:14 by avapaill          #+#    #+#             */
/*   Updated: 2022/11/11 14:38:29 by avapaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*previous;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		previous = *lst;
		*lst = (*lst)->next;
		ft_lstdelone(previous, del);
	}
}
