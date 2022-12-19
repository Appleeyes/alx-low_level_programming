#include "main.h"

/**
 * _puts - this is a function that prints a string, followed
 * by a new line, to stdout.
 * @str: input character
 * Return: Empty
 */

void _puts(char *str)
{
	int n = 0;

	while (str[n] != '\0')
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
