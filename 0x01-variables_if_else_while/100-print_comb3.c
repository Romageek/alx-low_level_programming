#include <stdio.h>

/**
* main - entry point
* Description: prints all possible different combinations of two digits
* Return: 0
*/

int main(void)
{
	int i = 48, j;

	while (i < 57)
	{
		j = i + 1;

		while (j < 58)
		{
			if (i != j)
			{
				putchar(i);
				putchar(j);
				if (i + j != 113)
				{
					putchar(',');
					putchar(' ');
				}
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
