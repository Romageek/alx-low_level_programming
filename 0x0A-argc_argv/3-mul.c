#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the multiplication of two numbers, followed by a new line.
 * @argc: arguments count
 * @argv: arguments vector
 * Return: 0 if success, 1 else
 */

int main(int argc, char *argv[])
{
	int n1, n2, p;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);
	p = n1 * n2;

	printf("%d\n", p);

	return (0);
}
