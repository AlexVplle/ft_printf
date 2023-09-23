/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avapaill <avapaill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 17:56:09 by avapaill          #+#    #+#             */
/*   Updated: 2022/11/12 15:10:32 by avapaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	if (nmemb > 18446744073709551615UL / size)
		return ((void *) 0);
	ptr = (void *) malloc(nmemb * size);
	if (!ptr)
		return ((void *) 0);
	while (i < nmemb * size)
	{
		ptr[i] = (unsigned char) 0;
		i++;
	}
	return ((void *) ptr);
}
