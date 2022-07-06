#include "main.h"

/**
* print_sign - entry point
* Description: prints the sign of a number
* Return: 1 if positive, 0 if zero, -1 if negative
* @n: the number given to the function as parameter
*/

int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	_putchar('0');
	return (0);
}
