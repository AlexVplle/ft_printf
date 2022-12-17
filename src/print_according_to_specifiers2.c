/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_according_to_specifiers2.c                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avapaill <avapaill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 21:48:24 by avapaill          #+#    #+#             */
/*   Updated: 2022/12/13 22:02:16 by avapaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/print_according_to_specifiers.h"
#include "../libft/libft.h"

void	print_hexnum_lower(int *length_printed, va_list argptr)
{
	unsigned int	number;

	number = (unsigned int) va_arg(argptr, unsigned int);
	ft_putnbrhex_fd(number, 1, length_printed, 0);
}

void	print_hexnum_upper(int *length_printed, va_list argptr)
{
	unsigned int	number;

	number = (unsigned int) va_arg(argptr, unsigned int);
	ft_putnbrhex_fd(number, 1, length_printed, 1);
}

void	print_percent(int *length_printed, va_list argptr)
{
	(void) argptr;
	ft_putchar_fd('%', 1);
	(*length_printed)++;
}
