/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abolor-e <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 11:41:31 by abolor-e          #+#    #+#             */
/*   Updated: 2023/11/09 11:52:45 by abolor-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		len;

	if (!format) /* or if (format == NULL) */
		return (0);
	va_start(ap, format);
	len = ft_vprint(format, ap);
	va_end(ap);
	return (len);
}

int	ft_vprintf(const char *format, va_list ap)
{
	t_format	*fmt;
	int			len;

	fmt = ft_initialize_format(format, ap);
	if (!fmt)
		return (0);
	while (fmt->format[fmt->i]) /* check i in the s_format */
	{
		if (fmt->format[fmt->i] == '%')
			ft_placeholder(fmt);
		else
			fmt->len += write(1, &fmt->fromat[fmt->i++], 1);
	}
	len = fmt->len;
	free(fmt);
	return (len);
}
