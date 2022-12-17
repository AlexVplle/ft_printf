/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avapaill <avapaill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 22:59:24 by avapaill          #+#    #+#             */
/*   Updated: 2022/10/13 23:15:18 by avapaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	unsigned char		*new_s;

	i = 0;
	new_s = (unsigned char *) s;
	while (i < n)
	{
		if (new_s[i] == (unsigned char) c)
			return (new_s + i);
		i++;
	}
	return ((void *) 0);
}
