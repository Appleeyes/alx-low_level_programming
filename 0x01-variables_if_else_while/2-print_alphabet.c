#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always o (Success)
 */
int main(void)
{
	char small;

	for (small = 'a'; small <= 'z'; small++)
		putchar(small);
	putchar('\n');
	return (0);
}

