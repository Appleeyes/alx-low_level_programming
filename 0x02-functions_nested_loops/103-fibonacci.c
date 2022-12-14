#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	int n;
	long int fibonacci[50], add = 2;

	fibonacci[0] = 1;
	fibonacci[1] = 2;

	for (n = 2; n < 50; n++)
	{
		fibonacci[n] = fibonacci[n - 1] + fibonacci[n - 2];
		if ((fibonacci[n] % 2) == 0 && fibonacci[n] < 4000000)
			add += fibonacci[n];
	}
	printf("%ld\n", add);
	return (0);
}

