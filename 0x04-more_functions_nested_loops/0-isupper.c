#include "main.h"

/**
 * _isupper - a function that checks for uppercase letter
 * @c: input character
 * Return: Always 1 if uppercase otherwise 0
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	else
		return (0);
}

