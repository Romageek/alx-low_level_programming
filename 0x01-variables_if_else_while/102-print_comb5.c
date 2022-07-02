#include <stdio.h>

/**
* main - entry point
* Description: prints all possible combinations of two two-digit numbers.
* Return: 0
*/

int main(void)
{
	int i = 48, j, k, m;

	while (i < 58)
	{
		j = 48;
		while (j < 58)
		{
			k = 48;
			while (k < 58)
			{
				m = 48;
				while (m < 58)
				{
					if (k > i || (k >= i && (k + m) > (i + j)))
					{
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(k);
					putchar(m);
					if (i + j + k + m == 227 && i == 57)
					{
					break;
					}
					else
					{
						putchar(',');
						putchar(' ');
					}
					}
					m++;
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
