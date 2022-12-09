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
	char small;
	char E;
	char Q;

	E = 'q';
	Q = 'e';

	for (small = 'a'; small <= 'z'; small++)
	{
		if (small != E && small != Q)
			putchar(small);
	}
	putchar('\n');
	return (0);
}

