#include <stdio.h>

/**
 * main -Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	int count;
	unsigned long a = 0, b = 1, add;
	unsigned long c, d, e, f;
	unsigned long h, i;

	for (count = 0; count < 92; count++)
	{
		add = a + b;
		printf("%lu, ", add);

		a = b;
		b = add;
	}

	c = a / 10000000000;
	e = b / 10000000000;
	d = a % 10000000000;
	f = b % 10000000000;

	for (count = 93; count < 99; count++)
	{
		h = c + e;
		i = d + f;
		if (d + f > 9999999999)
		{
			h += 1;
			i %= 10000000000;
		}

		printf("%lu%lu", h, i);
		if (count != 98)
			printf(", ");

		c = e;
		d = f;
		e = h;
		f = i;
	}
	printf("\n");
	return (0);
}

