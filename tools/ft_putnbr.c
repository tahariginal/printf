/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkoulal <tkoulal@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 09:32:29 by tkoulal           #+#    #+#             */
/*   Updated: 2023/11/22 12:17:54 by tkoulal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tools.h"

int	ft_putnbr(int n)
{
	long	nbr;
	int		len;

	nbr = n;
	len = 0;
	if (nbr < 0)
	{
		len += ft_putchar('-');
		nbr *= -1;
	}
	if (nbr <= 9)
		len += ft_putchar((nbr + 48));
	else
	{
		len += ft_putnbr((nbr / 10));
		len += ft_putchar((nbr % 10) + 48);
	}
	return (len);
}
