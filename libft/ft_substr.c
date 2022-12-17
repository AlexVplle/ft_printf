/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avapaill <avapaill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 21:29:45 by avapaill          #+#    #+#             */
/*   Updated: 2022/11/03 21:44:01 by avapaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static char	*ft_strncpy(char *dest, char *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	length_word;
	size_t	length_substring;
	char	*dest;

	if (!s)
		return ((void *) 0);
	length_word = ft_strlen(s);
	if (start >= length_word)
	{
		dest = (char *) malloc(1 * sizeof(char));
		if (!dest)
			return ((void *) 0);
		*dest = '\0';
		return (dest);
	}
	length_substring = length_word - start;
	if (len < length_substring)
		length_substring = len;
	dest = (char *) malloc((length_substring + 1) * sizeof(char));
	if (!dest)
		return ((void *) 0);
	dest = ft_strncpy(dest, (char *) s + start, length_substring);
	dest[length_substring] = '\0';
	return (dest);
}
