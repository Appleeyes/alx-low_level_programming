#include "main.h"

/**
 * print_line - a function that draws a straight line in the terminal
 * @n: input character
 * Return: Empty
 */

void print_line(int n)
{
	int b;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (b = 1; b <= n; b++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
