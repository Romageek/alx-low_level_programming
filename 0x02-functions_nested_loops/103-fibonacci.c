#include <stdio.h>

/**
* main - entry point
* Description: prints the sum of the even-valued terms
* Return: 0
*/

int main(void)
{
	long t1 = 0, t2 = 1, next = t1 + t2;
	long sum = 0;

	while (next <= 4000000)
	{
		if (next % 2 == 0)
			sum += next;
		t1 = t2;
		t2 = next;
		next = t1 + t2;
	}
	printf("%ld\n", sum);
	return (0);
}
