#include "main.h"

/**
* print_square - prints a square, followed by a new line
*
* Return: void
* @size: integer, size of square
*/

void print_square(int n)
{
	int i, j;
	
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
			_putchar('#');
		_putchar('\n');
	}
}
