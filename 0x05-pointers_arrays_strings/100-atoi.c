#include "main.h"

/**
* _atoi - converts a string to an integer
*
* Return: integer in the string
* @s: pointer to the string
*/

int _atoi(char *s)
{
	unsigned int number = 0;
	int i = 0, minus = 0, plus = 0;

	while (*(s + i) != '\0')
	{
		if (*(s + i) == '+')
		{
			plus++;
		}
		else if (*(s + i) == '-')
		{
			minus++;
		}
		else if (*(s + i) >= '0' && *(s + i) <= '9')
		{
			int c;

			c = i - '0';
			number = (number * 10) + c;
		}
		i++;
	}
	if (minus % 2 != 0)
		number = -1 * number;
	return (number);
}
