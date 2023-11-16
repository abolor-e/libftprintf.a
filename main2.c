/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abolor-e <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 13:26:35 by abolor-e          #+#    #+#             */
/*   Updated: 2023/11/16 13:18:59 by abolor-e         ###   ########.fr       */
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
	printf("'CH%cR TESTS'\n", 'A' );
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
	printf("'STR%s TESTS'\n", "ING");
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
	printf("'ADDRE%s TESTS'\n", "SS");
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
	printf("'%s TESTS'\n", "%d");
	green();
	printf("Basic number check: %d\n", 0);
	printf("Basic numbers check: %d, %d, %d\n", 0, 247, -2371);
	printf("Int max and min: %d, %d\n", (int)2147483647, (int)-2147483648);
	purple();
	ft_printf("Basic number check: %d\n", 0);
	ft_printf("Basic numbers check: %d, %d, %d\n", 0, 247, -2371);
	ft_printf("Int max and min: %d, %d\n\n", 2147483647, -2147483648);

	yellow();
	printf("'%s TESTS'\n", "%i");
	green();
	printf("Basic number check: %d\n", 0);
	printf("Basic numbers check: %d, %d, %d\n", 0, 247, -2371);
	printf("Int max and min: %d, %d\n", (int)2147483647, (int)-2147483648);
	purple();
	ft_printf("Basic number check: %d\n", 0);
	ft_printf("Basic numbers check: %d, %d, %d\n", 0, 247, -2371);
	ft_printf("Int max and min: %d, %d\n\n", 2147483647, -2147483648);

	yellow();
	printf("'UNSIGNED DECIMAL TESTS'\n");
	green();
	printf("%u\n", 42);
	printf("Multiple unsigned decimals %u, %u, %u\n", (unsigned int)4294967295, 0, (unsigned int)2147483648);
	purple();
	ft_printf("%u\n", 42);
	ft_printf("Multiple unsigned decimals %u, %u, %u\n\n", 4294967295, 0, 2147483648);

	yellow();
	printf("'LOWER HEXADECIMAL TESTS'\n");
	green();
	printf("%x\n", 0);
	printf("%x\n", 1);
	printf("%x\n", 15);
	printf("%x\n", 16);
	printf("%x\n", 66);
	printf("%x\n", -1);
	printf("%x\n", 3735929054u);
	printf("%x\n", -1892345701u);
	purple();
	ft_printf("%x\n", 0);
	ft_printf("%x\n", 1);
	ft_printf("%x\n", 15);
	ft_printf("%x\n", 16);
	ft_printf("%x\n", 66);
	ft_printf("%x\n", -1);
	ft_printf("%x\n", 3735929054u);
	ft_printf("%x\n\n", -1892345701u);

	yellow();
	printf("'UPPERCASE HEXADECIMAL TESTS'\n");
	green();
	printf("\n");
	printf("Whats up!!!%X\n", 0);
	printf("%X How are you doing?\n", 1);
	printf("%X\n", 15);
	printf("%X\n", 16);
	printf("%X\n", 66);
	printf("%X\n", -1);
	printf("%X isn't it!?\n", 3735929054u);
	printf("%X\n", -1892345701u);
	purple();
	ft_printf("\n");
	ft_printf("Whats up!!! %X\n", 0);
	ft_printf("%X How are you doing?\n", 1);
	ft_printf("%X\n", 15);
	ft_printf("%X\n", 16);
	ft_printf("%X\n", 66);
	ft_printf("%X\n", -1);
	ft_printf("%X isn't it!?\n", 3735929054u);
	ft_printf("%X\n\n", -1892345701u);

	yellow();
	printf("'PERCENT SIGN TESTS'\n");
	green();
	printf("%% Checking 2 percent signs\n");
	printf("%%%%%%%%%%%%%%%%%%%%%% Idk how many signs are here!\n");
	printf("Mixing with the specifiers %%s%%s%%p%%d%%i%%x%%X%%\n");
	purple();
	ft_printf("%% Checking 2 percent signs\n");
	ft_printf("%%%%%%%%%%%%%%%%%%%%%% Idk how many signs are here!\n");
	ft_printf("Mixing with the specifiers %%s%%s%%p%%d%%i%%x%%X%%\n\n");

	yellow();
	printf("'SPECIFIER MIX TEST'\n");
	green();
	printf("%c - %s - %p %d - %i - %u - %x - %X %%\n", 'a', "test", (void *)0xdeadc0de, 20, -20, -1, -1, 20000000);
	purple();
	ft_printf("%c - %s - %p %d - %i - %u - %x - %X %%\n", 'a', "test", (void *)0xdeadc0de, 20, -20, -1, -1, 20000000);
}
