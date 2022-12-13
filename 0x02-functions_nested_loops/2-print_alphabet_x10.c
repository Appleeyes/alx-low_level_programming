#include "main-h"

/**
 *print_alphabet_x10- this print the alphabet 10 times in lowercase
 *
 *Return: Nothing
 */

void print_alphabet_x10(void)
{
	int i;
	int j;

	while (i < 10)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		i++;
		_putchar('\n');
	}
}

