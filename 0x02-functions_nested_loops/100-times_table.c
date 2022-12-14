#include "main.h"

/**
 * print_times_table - a function that prints the n times table.
 *@n: an input character
 * Return: Empty
 */

void print_times_table(int n)
{
	int a, b;

	if (n > 0 && n < 15)
	{
		for (a = 0; a <= n; a++)
		{
			_putchar('0');
			for (b = 1; b <= n; b++)
				_putchar(a * b);
			_putchar('\n');
		}
	}
}

