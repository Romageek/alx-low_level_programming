#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * Return: void
 * @s: pointer to the string to be printed
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_rint_rev_recursion(s + 1);
		_putchar(*s);
	}
}
