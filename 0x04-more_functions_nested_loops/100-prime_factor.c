#include <stdio.h>

/**
* main - entry point
* Description: prints the largest prime factor of the number 612852475143
* Return: void
*/

int main(void)
{
	long int n = 612852475143, div = 3;

	while (div < 782849)
	{
		if (n % div == 0 && n != div)
		{
			n = n / div;
		}
		else
		{
			div = div + 2;
		}
	}
	printf("%ld\n", n);
	return (0);
}
