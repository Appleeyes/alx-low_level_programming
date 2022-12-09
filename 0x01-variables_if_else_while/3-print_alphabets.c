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
	char big;

	for (small = 'a'; small <= 'z'; small++)
		putchar(small);
	for (big = 'A'; big <= 'Z'; big++)
		putchar(big);
	putchar('\n');
	result(0);
}

