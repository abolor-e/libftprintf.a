/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nputnbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abolor-e <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 15:31:04 by abolor-e          #+#    #+#             */
/*   Updated: 2023/11/16 12:59:16 by abolor-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_nputnbr(long n, int *count)
{
	if (n < 0)
	{
		n *= -1;
		if (ft_nputchar('-', count) == -1)
			return (-1);
		if (ft_nputnbr(n, count) == -1)
			return (-1);
	}
	else if (n > 9)
	{
		if (ft_nputnbr(n / 10, count) == -1)
			return (-1);
		if (ft_nputnbr(n % 10, count) == -1)
			return (-1);
	}
	else if (n <= 9 && n >= 0)
	{
		if (ft_nputchar(n + 48, count) == -1)
			return (-1);
	}
	return (0);
}
