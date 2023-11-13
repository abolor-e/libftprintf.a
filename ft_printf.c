/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abolor-e <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 14:34:43 by abolor-e          #+#    #+#             */
/*   Updated: 2023/11/13 15:27:51 by abolor-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	check(unsigned long args, char c, int *count)
{
	int	a;

	a = 0;
	if (c == 'c')
		a = ft_putchar((char)args, count);
	if (c == 'd')
		a = ft_putnbr((int)args, count);
	if (c == 'x')
		a = ft_lowhexa((unsigned int)args, count);
	if (c == 'X')
		a = ft_upphexa((unsigned int)args, count);
	if (c == 'u')
		a = ft_putunsnbr((unsigned int)args, count);
	if (c == 's')
	{
		if (args)
			a = ft_putstr((char *)args, count);
		else
			a = ft_putstr("(null)", count);
	}
	if (c == 'p')
	{
		a = ft_printaddr((void *)args, count);
	}
	return (a);
}

int	ft_printf(const char *fmt, ...)
{
	va_list	args;
	int		count;

	count = 0;
	if (!fmt)
		return (0);
	va_start(args, fmt);
	if (ft_vprintf(fmt, args, &count) == -1)
		return (-1);
	va_end(args);
	return (count);
}

int	ft_vprintf(const char *fmt, va_list args, int *count)
{
	int	i;

	i = 0;
	while (fmt[i] != '\0')
	{
		if (fmt[i] != '%')
		{
			if (ft_putchar(fmt[i], count) == -1)
				return (-1);
		}
		else if (fmt[i] == '%' && fmt[i + 1] != '%')
		{
			if (check(va_arg(args, unsigned long), fmt[i + 1], count) == -1)
				return (-1);
			i++;
		}
		else if (fmt[i] == '%' && fmt[i + 1] == '%')
		{
			if (ft_putchar('%', count) == -1)
				return (-1);
			i++;
		}
		i++;
	}
	return (0);
}
