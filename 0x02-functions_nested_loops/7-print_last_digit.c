#include "main.h"

/**
* print_last_digit - entry point
* Description: prints last digit of a number
* Return: value of the last digit
* @n: the number given to the function as parameter
*/

int print_last_digit(int n)
{
	int x = n % 10;

	_putchar('0' + x);
	return (x);
}
