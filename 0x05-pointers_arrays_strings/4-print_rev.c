#include "main.h"

/**
* print_rev - prints a string, in reverse
*
* Return: void
* @s: pointer to a string
*/

void print_rev(char *s)
{
	if (*s == '\0')
		_putchar('\n');
	else
		print_rev(*(s + 1));
	_putchar(*s);
}
