#include "main.h"

/**
* print_times_table - entry point
* Description: prints the n times table, starting with 0.
* Return: void
* @n: integer, parameter
*/

void print_times_table(int n)
{
	int i, j;

	if (n >= 0 && n <= 15)
	{
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			int res = i * j;

			if (res >= 10 && res < 100)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + (res / 10));
				_putchar('0' + (res % 10));
			}
			else if (res >= 100)
			{
				_putchar(' ');
				_putchar('0' + ((res / 10) / 10));
				_putchar('0' + ((res / 10) % 10));
				_putchar('0' + (res % 10));
			}
			else
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + res);
			}
			if (j != n)
				_putchar(',');
		}
		_putchar('\n');
	}
	}
}
