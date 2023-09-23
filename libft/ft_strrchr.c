/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avapaill <avapaill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 23:02:03 by avapaill          #+#    #+#             */
/*   Updated: 2022/11/12 13:11:36 by avapaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char			*str;
	char			*last_character;
	unsigned char	char_c;

	str = (char *) s;
	last_character = (void *) 0;
	char_c = (unsigned char) c;
	while (*str)
	{
		if (*str == char_c)
			last_character = str;
		str++;
	}
	if (*str == char_c)
		last_character = str;
	return (last_character);
}
