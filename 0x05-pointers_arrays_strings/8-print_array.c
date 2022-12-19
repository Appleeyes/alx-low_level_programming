#include "main.h"
#include <stdio.h>

/**
 * print_array - this is a function that prints n elements of an
 * array of integers, followed by a new line.
 * @a: input character
 * @n: another input character
 * Return: Empty
 */

void print_array(int *a, int n)
{
	int x = 0;

	for (; x < n; n++)
	{
		printf("%d", a[x]);
		if (x < n - 1)
			printf(", ");
	}
	putchar('\n');
}
