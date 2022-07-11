#include "main.h"

/**
* puts_half - prints half of a string
*
* Return: void
* @str: pointer to a string
*/

void puts_half(char *str)
{
	int l = 0, half;

	while (*(str + l) != '\0')
		l++;
	half = l / 2;
	if (half % 2 != 0)
		half += 1;

	while (half <= l)
	{
		_putchar(*(str + half));
		half++;
	}
	_putchar('\n');
}
