#include "main.h"

/**
 * print_rev - this is a function that prints a string, in reverse,
 * followed by a new line.
 * @s: iput character
 * Return: Empty
 */

void print_rev(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;

	while (len)
		_putchar(s[--len]);

	_putchar('\n');
}
