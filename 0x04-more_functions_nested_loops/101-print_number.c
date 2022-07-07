#include "main.h"

/**
* print_number - prints an integer
*
* Return: void
* @n: number to print, integer
*/

void print_number(int n)
{
	unsigned int num = n;

	if (num < 0)
	{
		_putchar('-');
		num = -n;
	}
	if (num / 10 != 0)
	{
		print_number(num / 10);
		_putchar'0' + ((num % 10));
	}
}
