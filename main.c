#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>

int	main(void)
{
	ft_printf("Print char : %c. Done\n", 'V');
	ft_printf("Print string : %s. Done\n", (char *)NULL);
	ft_printf("Print int(d) : %d. Done\n", 10);
	ft_printf("Print neg int : %d. Done\n", -10);
	ft_printf("Print zero int : %d. Done\n", 0);
	ft_printf("Print hex int : %x. Done\n", -10);
	ft_printf("Print int(i) : %i. Done\n", 26);
	ft_printf("Print hex int : %X. Done\n", 1712345671234567890);
	ft_printf("Print zero hex int : %x. Done\n", 0);
	ft_printf("Print pointer : %p. Done\n", (void *)-1);
	ft_printf("Print percentage : %%. Done\n");
	ft_printf("Print unsint : %u. Done\n\n\n", -10);
	printf("Print char : %c. Done\n", 'V');
	printf("Print string : %s. Done\n", (char *)NULL);
	printf("Print int(d) : %d. Done\n", 10);
	printf("Print neg int : %d. Done\n", -10);
	printf("Print zero int : %d. Done\n", 0);
	printf("Print hex int : %x. Done\n", -10);
	printf("Print int(i) : %i. Done\n", 26);
	printf("Print hex int : %X. Done\n", 1712345671);
	printf("Print zero hex int : %x. Done\n", 0);
	printf("Print pointer : %p. Done\n", (void *)-1);
	printf("Print percentage : %%. Done\n");
	printf("Print unsint : %u. Done\n", -10);

	printf("\n\n\n\n - > TEST MERLIN < - \n\n\n\n\n");
	printf("value Ft_printf : %d\n", ft_printf("printf : s%s%%\n", NULL));
	printf("value printf : %d\n", printf("printf : s%s%%\n", NULL));
}

