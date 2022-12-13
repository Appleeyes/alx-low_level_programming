#include "main.h"

/**
 * print_sign - this is a function that prints the sign of a number.
 * @n: input character
 * Return: Always 1 if n is greater than 0 || 0 if n is 0 otherwise -1
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	_putchar('\n');
	return (0);
}

