#include "main.h"

/**
* more_numbers - prints 10 times the numbers, from 0 to 14
*
* Return: void
*/

void more_numbers(void)
{
	int i, j, b;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			if (j >= 10)
			{
				b = j % 10;
				_putchar('1');
			}
			else
			{
				b = j;
			}
			_putchar('0' + b);
		}
		_putchar('\n');
	}
}
