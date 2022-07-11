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
	l--;
	if (l % 2 == 0)
		half = l / 2;
	else
		half = (l - 1) / 2;
	while (half <= l)
	{
		_putchar(*(str + half);
		half++;
	}
}
