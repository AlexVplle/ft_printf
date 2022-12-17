/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avapaill <avapaill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 18:01:01 by avapaill          #+#    #+#             */
/*   Updated: 2022/11/12 14:49:55 by avapaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static size_t	length_str(int n)
{
	size_t		length;
	size_t		n_long;

	length = 0;
	if (n < 0)
	{
		length++;
		n_long = (size_t) n * -1;
	}
	else
		n_long = (size_t) n;
	n_long /= 10;
	length++;
	while (n_long)
	{
		length++;
		n_long /= 10;
	}
	return (length);
}

char	*ft_itoa(int n)
{
	size_t	i;
	size_t	unsigned_n;
	char	*str;

	i = length_str(n);
	if (n > 0)
		unsigned_n = (size_t) n;
	else
		unsigned_n = -1 * (size_t) n;
	str = malloc(sizeof(char) * (i + 1));
	if (!str)
		return ((void *) 0);
	str[i--] = '\0';
	str[i--] = '0' + unsigned_n % 10;
	unsigned_n /= 10;
	while (unsigned_n)
	{
		str[i--] = '0' + unsigned_n % 10;
		unsigned_n /= 10;
	}
	if (n < 0)
		str[i--] = '-';
	return (str);
}
