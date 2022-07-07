#include "main.h"

/**
* print_diagonal - draws a diagonal line in the terminal
*
* Return: void
* @n: integer, number of times the character \ should be printed
*/

void print_diagonal(int n)
{
	while (n > 0)
	{
		int i;

		for (i = 1; i < n; i++)
			_putchar(' ');
		_putchar(33);
		n--;
	}
	_putchar('\n');
}
