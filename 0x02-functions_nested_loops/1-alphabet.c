#include "main.h"

/**
* print_alphabet - entry point
* Description: prints the alphabet, in lowercase
* Return: 0
*/

void print_alphabet(void)
{
	int i = 97;

	while (i < 123)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
