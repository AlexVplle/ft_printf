/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_unsigned.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avapaill <avapaill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 15:07:41 by avapaill          #+#    #+#             */
/*   Updated: 2022/12/11 15:09:55 by avapaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static size_t	length_str(unsigned int n)
{
	size_t		length;

	length = 0;
	n /= 10;
	length++;
	while (n)
	{
		length++;
		n /= 10;
	}
	return (length);
}

char	*ft_itoa_unsigned(unsigned int n)
{
	size_t	i;
	char	*str;

	i = length_str(n);
	str = malloc(sizeof(char) * (i + 1));
	if (!str)
		return ((void *) 0);
	str[i--] = '\0';
	str[i--] = '0' + n % 10;
	n /= 10;
	while (n)
	{
		str[i--] = '0' + n % 10;
		n /= 10;
	}
	return (str);
}
