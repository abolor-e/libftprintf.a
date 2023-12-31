/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abolor-e <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 12:27:01 by abolor-e          #+#    #+#             */
/*   Updated: 2023/11/15 12:33:04 by abolor-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_add(unsigned long addr, int *count)
{
	if (addr >= 16)
	{
		ft_add(addr / 16, count);
		addr %= 16;
	}
	if (ft_nputchar("0123456789abcdef"[addr], count) == -1)
		return (-1);
	return (0);
}

int	ft_putaddr(void *addr, int *count)
{
	if (ft_nputstr("0x", count) == -1)
		return (-1);
	if (ft_add((unsigned long)addr, count) == -1)
		return (-1);
	return (0);
}
