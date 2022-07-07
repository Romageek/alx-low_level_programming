#include "main.h"

/**
* print_diagonal - draws a diagonal line in the terminal
*
* Return: void
* @n: integer, number of times the character \ should be printed
*/

void print_diagonal(int n)
{
	int j = 0;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
	while (j < n)
	{
		int i;

		for (i = 0; i < j; i++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
		j++;
	}
	}
}
