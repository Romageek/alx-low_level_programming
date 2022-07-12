#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - generates keygen
* Return: 0
*/

int main(void)
{
	int password;
	char c;

	srand(time(NULL));
	while (password <= 2645)
	{
		c = rand() % 128;
		password += c;
		putchar(c);
	}
	putchar(2772 - password);
	return (0);
}
