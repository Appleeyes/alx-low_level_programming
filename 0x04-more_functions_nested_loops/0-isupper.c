#include "main.h"

/**
 * _isupper - a function that checks for uppercase letter
 * @c: input character
 * Return: Always 1 if uppercase otherwise 0
 */

int _isupper(int c)
{
	char big = 'A';
	int up = 0;

	for (; big <= 'Z'; big++)
	{
		if (c == big)
		{
			up = 1;
			break;
		}
	}

	return (up);
}

