#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	int a, add = 0;

	for (a = 0; a < 1024; a++)
	{
		if ((a % 5) == 0 || (a % 3) == 0)
			add += a;
	}
	printf("%d\n", add);
	return (0);
}

