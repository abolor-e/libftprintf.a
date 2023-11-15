/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abolor-e <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 13:26:35 by abolor-e          #+#    #+#             */
/*   Updated: 2023/11/15 16:35:26 by abolor-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

void    green()
{
    printf("\033[0;32m");
}

void    purple()
{
    ft_printf("\033[0;35m");
}

void	yellow()
{
	printf("\033[1;33m");
}





int	main(void)
{
	char	*null_str = NULL;
	int		i;
	int		*p;
	char	*str;

	i = 42;
	p = &i;
	str = malloc(5);
	yellow();
	printf("'CH%cR TEST'\n", 'A' );
	green();
	printf("Char = %c\n", 'a');
	printf("%c small string\n", 'a');
	printf("The char is: %c\n", '\0');
	printf("Multiple characters: %c%c%c%c\n", 'c', 'h', 'a', 'r');
	printf("H%cH%cH%cH%c\n", 'a', 'a', 'a', 'a');
	purple();
	ft_printf("Char = %c\n", 'a');
	ft_printf("%c small string!\n", 'a');
	ft_printf("The char is: %c\n", '\0');
	ft_printf("Multiple characters: %c%c%c%c\n", 'c', 'h', 'a', 'r');
	ft_printf("H%cH%cH%cH%c\n\n", 'a', 'a', 'a', 'a');

	yellow();
	printf("'STR%s TEST'\n", "ING");
	green();
	printf("%s\n", "");
	printf("This is a %s!\n", "test");
	printf("%s is a %s %s %s\n", "This", "very", "ugly", "test");
	printf("Weird test: %s\n", "000%");
	printf("%s\n", "I hope you will give me full points on my ft_print :))!");
	printf("%s everywhere\n", null_str);
	printf("Multiple strings: %s%s%s%s%s\n", "Hello", " ", "Wor", "ld", "!");	
	purple();
	ft_printf("%s\n", "");
	ft_printf("This is a %s!\n", "test");
	ft_printf("%s is a %s %s %s\n", "This", "very", "ugly", "test");
	ft_printf("Weird test: %s\n", "000%");
	ft_printf("%s\n", "I hope you will give me full points on my ft_print :))!");
	ft_printf("%s everywhere\n", null_str);
	ft_printf("Multiple string: %s%s%s%s%s\n\n", "Hello", " ", "Wor", "ld", "!");

	yellow();
	printf("'ADDRE%s TEST'\n", "SS");
	green();
	printf("Address of int i: %p\n", &i);
	printf("Address of int i %p and its pointers address %p\n", &i, &p);
	printf("random address from allocation %p\n", str); 
	printf("This %p is a very strange address\n", (void *)(long int)i);
	printf("%p\n", (void *)-1);
	printf("%p\n", NULL);
	purple();
	ft_printf("Address of int i: %p\n", &i);
	ft_printf("Address of int i %p and its pointers address %p\n", &i, &p);
	ft_printf("random address from allocation %p\n", str);
	ft_printf("This %p is a very strange address\n", (void *)(long int)i);
	ft_printf("%p\n", (void *)-1);
	ft_printf("%p\n\n", NULL);

	yellow();
	printf("'%s TEST'\n", "%d");
	green();
	printf("Basic number check: %d\n", 0);
	printf("Basic numbers check: %d, %d, %d\n", 0, 247, -2371);
	printf("Int max and min: %d, %d\n", (int)2147483647, (int)-2147483648);
	purple();
	ft_printf("Basic number check: %d\n", 0);
	ft_printf("Basic numbers check: %d, %d, %d\n", 0, 247, -2371);
	ft_printf("Int max and min: %d, %d\n", 2147483647, -2147483648);

	yellow();
	printf("'%s TEST'\n", "%i");
	green();
	printf
}
