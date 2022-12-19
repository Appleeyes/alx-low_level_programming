#include "main.c"

/**
 * swap_int - this is a function that swaps the values of two integers.
 * @a: input character
 * @b: another input character
 * Return: Empty
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
