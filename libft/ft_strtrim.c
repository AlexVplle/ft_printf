/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avapaill <avapaill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 22:25:03 by avapaill          #+#    #+#             */
/*   Updated: 2022/11/09 17:58:33 by avapaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	is_in_set(char c, char const *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

static size_t	trim(char const *s1, char const *set, int way, int where_trim)
{
	while (is_in_set(s1[where_trim], set) && where_trim >= 0)
		where_trim += way;
	return (where_trim);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;

	if (!s1 || !set)
		return ((void *) 0);
	start = trim(s1, set, 1, 0);
	end = trim(s1, set, -1, ft_strlen(s1) - 1);
	return (ft_substr(s1, start, end - start + 1));
}
