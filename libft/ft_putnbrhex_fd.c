/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hexa_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avapaill <avapaill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 15:24:07 by avapaill          #+#    #+#             */
/*   Updated: 2022/12/13 22:09:36 by avapaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putnbrhex_fd(unsigned long nb, int fd, int *len_print, int upper)
{
	size_t		length_base;
	char		*base;

	if (upper)
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	length_base = 16;
	if (nb < length_base)
	{
		write(1, &base[nb], 1);
		(*len_print)++;
		return ;
	}
	ft_putnbrhex_fd(nb / length_base, fd, len_print, upper);
	ft_putnbrhex_fd(nb % length_base, fd, len_print, upper);
}
