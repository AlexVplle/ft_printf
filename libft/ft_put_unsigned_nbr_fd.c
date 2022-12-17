/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_unsigned_nbr_fd.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avapaill <avapaill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 15:02:21 by avapaill          #+#    #+#             */
/*   Updated: 2022/12/11 15:02:48 by avapaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_put_unsigned_nbr_fd(unsigned int nb, int fd)
{	
	if (nb < 10)
	{
		ft_putchar_fd(nb + '0', fd);
		return ;
	}	
	ft_put_unsigned_nbr_fd(nb / 10, fd);
	ft_put_unsigned_nbr_fd(nb % 10, fd);
}
