#include "main.h"

/**
* puts2 - prints every other character of a string, starting with the 1st one
*
* Return: void
* @str: pointer to a string
*/

void puts2(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
