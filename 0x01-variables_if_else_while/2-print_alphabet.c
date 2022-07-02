#include <stdio.h>

/**
* main - entry point
* Description: prints the alphabet in lowercase
* Return: 0
*/

int main(void)
{
	int i = 97;

	while (i < 123)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
