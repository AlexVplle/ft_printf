/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avapaill <avapaill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 23:00:15 by avapaill          #+#    #+#             */
/*   Updated: 2022/11/11 23:41:18 by avapaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*new_dest;
	char		*new_src;

	i = 0;
	new_dest = (char *) dest;
	new_src = (char *) src;
	if (new_src < new_dest)
	{
		while (n)
		{
			new_dest[n - 1] = new_src[n - 1];
			n--;
		}
	}
	else
	{
		while (i < n)
		{
			new_dest[i] = new_src[i];
			i++;
		}
	}
	return (new_dest);
}
