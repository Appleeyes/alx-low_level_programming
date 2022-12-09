#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int small;

	for (small = '0'; small < '16'; small++)
		putchar(small);
	putchar('\n');
	return (0);
}

