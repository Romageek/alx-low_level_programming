#include "main.h"

/**
* print_triangle - prints a triangle, followed by a new line
*
* Return: void
* @size: integer, size of triangle
*/

void print_triangle(int size)
{
	int i, j, k;

	for (i = 1; i <= n; i++)
	{
		for (j = 0; j < (n - i); j++)
			_putchar(' ');
		for (k = 0; k < i; k++)
			_putchar('#');
		_putchar('\n');
	}
	_putchar('\n');
}
