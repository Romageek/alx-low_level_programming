#include <stdio.h>

/**
* main - entry point
* Description: prints the largest prime factor of the number 612852475143
* Return: void
*/

int main(void)
{
	long int n = 612852475143, div = 2, larg;

	while (n != 1)
	{
		if (n % div == 0)
		{
			n = n / 2;
			larg = div;
		}
		div++;
	}
	printf("%ld\n", larg);
	return (0);
}
