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
	int i = 0, minus = 0;

	while (*(s + i) != '\0')
	{
		if (*(s + i) == '-')
		{
			minus++;
		}
		else if (*(s + i) >= '0' && *(s + i) <= '9')
		{
			int c;

			c = *(s + i) - '0';
			number = (number * 10) + c;
			if ((*(s + i + 1) - '0') > 9 && (*(s + i + 1) - '0') <128)
				break;
		}
		i++;
	}
	if (minus % 2 != 0)
		number = -1 * number;
	return (number);
}
