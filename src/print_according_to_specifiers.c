/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_according_to_specifiers.c                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avapaill <avapaill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 18:13:52 by avapaill          #+#    #+#             */
/*   Updated: 2022/12/13 22:19:23 by avapaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/print_according_to_specifiers.h"
#include "../libft/libft.h"
#include <stdint.h>

void	print_single_char(int *length_printed, va_list argptr)
{
	ft_putchar_fd((unsigned char) va_arg(argptr, int), 1);
	(*length_printed)++;
}

void	print_string(int *length_printed, va_list argptr)
{
	char	*str;

	str = (char *) va_arg(argptr, char *);
	if (!str)
	{
		ft_putstr_fd("(null)", 1);
		*length_printed += ft_strlen("(null)");
	}
	else
	{
		ft_putstr_fd(str, 1);
		*length_printed += ft_strlen(str);
	}
}

void	print_pointer(int *length_printed, va_list argptr)
{
	void		*pointer;
	uintptr_t	address;

	pointer = (void *) va_arg(argptr, void *);
	address = (uintptr_t) pointer;
	if (0 == address)
	{
		ft_putstr_fd("(nil)", 1);
		*length_printed += 5;
	}
	else
	{
		ft_putstr_fd("0x", 1);
		*length_printed += 2;
		ft_putnbrhex_fd(address, 1, length_printed, 0);
	}
}

void	print_number(int *length_printed, va_list argptr)
{
	char	*nbr_str;

	nbr_str = ft_itoa((int) va_arg(argptr, int));
	if (!nbr_str)
		return ;
	ft_putstr_fd(nbr_str, 1);
	*length_printed += ft_strlen(nbr_str);
	free(nbr_str);
}

void	print_unsigned_num(int *length_printed, va_list argptr)
{
	char	*nbr_str;

	nbr_str = ft_itoa_unsigned((unsigned int) va_arg(argptr, unsigned int));
	if (!nbr_str)
		return ;
	ft_putstr_fd(nbr_str, 1);
	(void) length_printed;
	*length_printed += ft_strlen(nbr_str);
	free(nbr_str);
}
