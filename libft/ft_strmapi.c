/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avapaill <avapaill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 22:40:34 by avapaill          #+#    #+#             */
/*   Updated: 2022/11/10 22:55:58 by avapaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	length;
	size_t	i;
	char	*dest;

	if (!s || !f)
		return ((void *) 0);
	length = ft_strlen(s);
	i = 0;
	dest = malloc(sizeof(char) * (length + 1));
	if (!dest)
		return ((void *) 0);
	while (i < length)
	{
		dest[i] = (*f)(i, s[i]);
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
