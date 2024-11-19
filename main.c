#include "ft_printf.h"
#include <stdio.h>

int main()
{
	int a;
	printf("%d\n",ft_printf("%i%dabcdef%u%sgeh%c%pasdasd%x222%X", 42, NULL, 142, "\n", NULL, NULL, NULL, 44));
	printf("%d\n",printf("%i%dabcdef%u%sgeh%c%pasdasd%x222%X", 42, NULL, 142, "\n", NULL, NULL, NULL, 44));
}