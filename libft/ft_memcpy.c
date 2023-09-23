/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avapaill <avapaill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 23:00:09 by avapaill          #+#    #+#             */
/*   Updated: 2022/11/11 22:47:28 by avapaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*new_dest;
	char	*new_src;

	i = 0;
	new_dest = (char *) dest;
	new_src = (char *) src;
	while (i < n)
	{
		new_dest[i] = (char) new_src[i];
		i++;
	}
	return ((void *) new_dest);
}
