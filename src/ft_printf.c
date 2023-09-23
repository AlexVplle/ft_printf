/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avapaill <avapaill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 16:50:54 by avapaill          #+#    #+#             */
/*   Updated: 2022/12/12 22:02:19 by avapaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../inc/ft_printf.h"
#include "../inc/print_according_to_specifiers.h"

int	ft_printf(const char *format, ...)
{
	int		*p_len_print;
	int		len_print;
	char	*new_format;
	va_list	argptr;

	if (!format)
		return (-1);
	va_start(argptr, format);
	new_format = (char *) format;
	len_print = 0;
	p_len_print = &len_print;
	while (*new_format)
	{
		if (*new_format == '%' && *(new_format + 1))
			new_format = process_format(new_format + 1, p_len_print, argptr);
		else
		{
			ft_putchar_fd(*new_format, 1);
			len_print++;
			new_format++;
		}
	}
	va_end(argptr);
	return (*p_len_print);
}

char	*process_format(char *format, int *length_printed, va_list argptr)
{
	int		index_specifiers;
	char	*specifiers;
	void	(*array_function[9])(int *, va_list);

	array_function[0] = print_single_char;
	array_function[1] = print_string;
	array_function[2] = print_pointer;
	array_function[3] = print_number;
	array_function[4] = print_number;
	array_function[5] = print_unsigned_num;
	array_function[6] = print_hexnum_lower;
	array_function[7] = print_hexnum_upper;
	array_function[8] = print_percent;
	specifiers = "cspdiuxX%";
	index_specifiers = find_index(specifiers, *format);
	if (-1 == index_specifiers)
		return (format);
	array_function[index_specifiers](length_printed, argptr);
	return (format + 1);
}

int	find_index(char *to_find, char c)
{
	size_t	i;

	i = 0;
	while (to_find[i])
	{
		if (c == to_find[i])
			return (i);
		i++;
	}
	return (-1);
}
