/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_according_to_specifiers.h                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avapaill <avapaill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 18:03:05 by avapaill          #+#    #+#             */
/*   Updated: 2022/12/13 22:08:08 by avapaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINT_ACCORDING_TO_SPECIFIERS_H
# define PRINT_ACCORDING_TO_SPECIFIERS_H

# include <stdarg.h>
# include <stdlib.h>

void	print_single_char(int *length_printed, va_list argptr);
void	print_string(int *length_printed, va_list argptr);
void	print_pointer(int *length_printed, va_list argptr);
void	print_number(int *length_printed, va_list argpt);
void	print_unsigned_num(int *length_printed, va_list argptr);
void	print_hexnum_lower(int *length_printed, va_list argptr);
void	print_hexnum_upper(int *length_printed, va_list argptr);
void	print_percent(int *length_printed, va_list argptr);

#endif
