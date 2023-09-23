/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avapaill <avapaill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 23:00:33 by avapaill          #+#    #+#             */
/*   Updated: 2022/10/13 23:00:35 by avapaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*new_s;

	i = 0;
	new_s = (unsigned char *) s;
	while (i < n)
	{
		new_s[i] = (unsigned char) c;
		i++;
	}
	return (new_s);
}
