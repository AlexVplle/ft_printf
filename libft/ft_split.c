/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avapaill <avapaill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 16:31:34 by avapaill          #+#    #+#             */
/*   Updated: 2022/11/09 18:33:35 by avapaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static size_t	count_word(char const *str, char c)
{
	size_t	count;
	size_t	word;

	count = 0;
	word = 0;
	while (*str)
	{
		if (*str != c && !word)
		{
			count++;
			word = 1;
		}
		else if (*str == c)
			word = 0;
		str++;
	}
	return (count);
}

static size_t	word_length(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (s[count] && s[count] != c)
		count++;
	return (count);
}

static size_t	word_copy(char const *s, char **array, char c, size_t i)
{
	size_t	len_word;

	len_word = word_length(s, c);
	array[i] = malloc((len_word + 1) * sizeof(char));
	if (!array[i])
		return (0);
	ft_strlcpy(array[i], s, len_word + 1);
	return (len_word);
}

char	**ft_split(char const *s, char c)
{
	size_t	number_word;
	size_t	i;
	size_t	len_word;
	char	**array;

	if (!s)
		return ((void *) 0);
	number_word = count_word(s, c);
	array = malloc((number_word + 1) * sizeof(char *));
	if (!array)
		return ((void *) 0);
	i = 0;
	while (i < number_word)
	{
		while (*s && *s == c)
			s++;
		len_word = word_copy(s, array, c, i);
		if (!len_word)
			return ((void *) 0);
		s += len_word;
		i++;
	}
	array[number_word] = 0;
	return (array);
}
