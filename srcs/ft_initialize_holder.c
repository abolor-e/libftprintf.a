/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_initialize_holder.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abolor-e <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 12:07:13 by abolor-e          #+#    #+#             */
/*   Updated: 2023/11/09 12:10:23 by abolor-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

t_holder	*ft_initialize_holder(void)
{
	t_holder	*h;

	h = malloc(sizeof(t_holder));
	if (!h)
		return (NULL);
	h->left_justify = 0;
	h->prefix = ft_strdup("");
	h->padding = ' ';
	h->width = 0;
	h->precision = -1;
	h->conversion = '\0';
	h->argument = NULL;
	h->len = 0;
	return (h);
}
