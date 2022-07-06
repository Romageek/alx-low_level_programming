#include "main.h"

/**
* main - entry point
* Description: prints _putchar
* Return: 0
*/

int main(void)
{
	char s[] = "_putchar\n";
	int i = 0;

	while (i < 9)
	{
		char c = s[i];

		_putchar(c);

		i++;
	}
	return (0);
}
