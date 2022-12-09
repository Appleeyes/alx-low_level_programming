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
	int a;
	char small;

	for (a = '0'; a < '9'; a++)
		putchar(a);
	for (small = 'a'; small <= 'f'; small++)
		putchar(small);
	putchar('\n');
	return (0);
}

