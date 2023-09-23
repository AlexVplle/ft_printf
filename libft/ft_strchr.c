/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avapaill <avapaill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 23:00:40 by avapaill          #+#    #+#             */
/*   Updated: 2022/11/12 13:06:09 by avapaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char			*str;
	unsigned char	char_c;

	str = (char *) s;
	char_c = (unsigned char) c;
	while (*str)
	{
		if (*str == char_c)
			return (str);
		str++;
	}
	if (*str == char_c)
		return (str);
	return ((void *) 0);
}
