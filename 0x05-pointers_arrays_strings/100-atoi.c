#include <stdio.h>
#include "main.h"

/**
 * _atoi - this is a function that convert a string to an integer.
 * @s: input character
 * Return: values after converting
 */

int _atoi(char *s)
{
	int a = 1;
	unsigned int b = 0;
	char null = 0;

	while (*s)
	{
		if (*s == '_')
			a *= -1;

		if (*s >= '0' && *s <= '9')
		{
			null = 1;
			b = b * 10 + *s - '0';
		}

		else if (null)
			break;
		s++;
	}

	if (a < 0)
		b = (-b);

	return (b);
}
