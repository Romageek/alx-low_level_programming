#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the addition of positive numbers
 * @argc: arguments count
 * @argv: arguments vector
 * Return: 0 if success, 1 else.
 */

int main(int argc, char *argv[])
{
	int n, i, sum = 0;

	for (n = 1; n < argc; n++)
	{
		for (i = 0; argv[n][i]; i++)
		{
			if (argv[n][i] < '0' || argv[n][i] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[n]);
	}

	printf("%d\n", sum);

	return (0);
}
