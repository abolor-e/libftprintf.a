/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abolor-e <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 11:25:19 by abolor-e          #+#    #+#             */
/*   Updated: 2023/11/09 14:44:16 by abolor-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	LIBFTPRINTF_H
# define LIBFTPRINTF_H

typedef struct s_format
{
	const char	*format;
	va_list		ap;
	size_t		i;
	size_t		len;
}				t_format;

typedef struct s_holder
{
	int	left_justify;
	char	*prefix;
	char	padding;
	int	width;
	int	precision;
	char	conversion;
	char	*argument;
	size_t	len;
}				t_holder;

int	ft_printf(const char *format, ...);
int	ft_vprint(const char *format, va_list ap);

//structs' initialization
t_format	*ft_initialize_format(const char *format, va_list ap);
t_holder	*ft_initialize_holder(void);

//placeholder
void	ft_placeholder(t_format *fmt);
void	*ft_parse(t_format *fmt, t_holder *h);
void	ft_parse_flags(t_format *fmt, t_holder *h);
void	ft_parse_width(t_format *fmt, t_holder *h);
void	ft_parse_precision(t_format *fmt, t_holder *h);
void	ft_parse_conversion(t_format *fmt, t_holder *h);

...
#endif
