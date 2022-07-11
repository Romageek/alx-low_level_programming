#include "main.h"

/**
* puts_half - prints half of a string
*
* Return: void
* @str: pointer to a string
*/

void puts_half(char *str)
{
	int l = 1, half;

	while (*(str + l) != '\0')
		l++;
	half = l / 2;
	if (l % 2)
		half = (l - 1) / 2;
	while (half <= l)
	{
		_putchar(str[half]);
		half++;
	}
	_putchar('\n');
}
