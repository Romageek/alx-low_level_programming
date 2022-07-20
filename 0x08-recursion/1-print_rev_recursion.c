#include "main.h"

/**
 * _puts_rev_recursion - prints a string in reverse
 * Return: void
 * @s: pointer to the string to be printed
 */

void _puts_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_puts_recursion(s + 1);
		_putchar(*s);
	}
}
