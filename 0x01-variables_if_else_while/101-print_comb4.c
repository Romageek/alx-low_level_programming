#include <stdio.h>

/**
* main - entry point
* Description: prints all possible different combinations of three digits
* Return: 0
*/

int main(void)
{
	int i = 48, j, k;

	while (i < 56)
	{
		j = i + 1;

		while (j < 57)
		{
			k = j + 1;

			while (k < 58)
			{
				if (i != j && j != k)
				{
					putchar(i);
					putchar(j);
					putchar(k);
					if (i + j + k != 168)
					{
						putchar(',');
						putchar(' ');
					}
				}
				k++;
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
