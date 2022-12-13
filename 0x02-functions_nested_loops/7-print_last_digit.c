#include "main.h"

/**
 *print_last_digit - this is a function that prints the last digit of a number.
 *@c: input character
 * Return: last digit of c
 */

int print_last_digit(int c)
{
	int b;

	if (c < 0)
		b = -1 * (c % 10);
	else
		b = c % 10;

	_putchar((b % 10) + '0');
	return (b % 10);
}

