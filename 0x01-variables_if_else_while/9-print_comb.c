#include <stdio.h>

/**
* main - entry point
* Description: prints all possible combinations of single-digit numbers
* Return: 0
*/

int main(void)
{
	int i = 48;

	while (i < 58)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	putchar('\n');
	return (0);
}
