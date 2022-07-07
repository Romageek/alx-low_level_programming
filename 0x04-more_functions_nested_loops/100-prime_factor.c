#include <stdio.h>

/**
* main - entry point
* Description: prints the largest prime factor of the number 612852475143
* Return: void
*/

int main(void)
{
	long int n = 612852475143, div = 3, larg;

	while (div < 782849)
	{
		if (n % div == 0)
		{
			n = n / 2;
			larg = div;
		}
		else
		{
			div = div + 2;
		}
	}
	printf("%ld\n", larg);
	return (0);
}
