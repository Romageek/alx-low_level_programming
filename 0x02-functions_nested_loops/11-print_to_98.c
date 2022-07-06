#include <stdio.h>
#include "main.h"

/**
* print_to_98 - prints numbers to 98
* Description: prints all natural number from n - 98
* Return: void
* @n: starting integer
*/

void print_to_98(int n)
{
	if (n > 98)
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
		printf("98\n");
	}
	else if (n < 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
		printf("98\n");
	}
	else if (n == 98)
	{
		printf("98\n");
	}
}
