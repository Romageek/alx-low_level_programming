#include "main.h"

/**
* times_table - entry point
* Description: prints the 9 times table, starting with 0.
* Return: void
*/

void times_table(void)
{
	int i = 0;

	while (i < 10)
	{
		int j = 0;

		while (j < 10)
		{
			int res = i * j;

			if (res >= 10)
			{
				int k = res % 10;

				res = res / 10;
				_putchar(' ');
				_putchar('0' + res);
				_putchar('0' + k);
			}
			else
			{
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + res);
			}
			if (j != 9)
				_putchar(',');
			j++;
		}
		i++;
		_putchar('\n');
	}
}
