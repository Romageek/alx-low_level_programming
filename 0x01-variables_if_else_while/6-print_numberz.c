#include <stdio.h>

/**
* main - entry point
* Description: prints all single digit numbers of base 10 starting from 0
* Return: 0
*/

int main(void)
{
	int i = 48;

	while (i < 58)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
