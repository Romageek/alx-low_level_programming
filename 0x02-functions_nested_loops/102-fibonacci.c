#include <stdio.h>

/**
* main - entry point
* Description: prints the first 50 Fibonacci numbers, starting with 1 and 2
* Return: 0
*/

int main(void)
{
	int i = 0;
	long t1 = 1, t2 = 2, next = t1 + t2;

	printf("1, 2, ");

	while (i < 48)
	{
		printf("%ld", next);
		t1 = t2;
		t2 = next;
		next = t1 + t2;
		if (i != 47)
			printf(", ");
		i++;
	}
	putchar('\n');
	return (0);
}
