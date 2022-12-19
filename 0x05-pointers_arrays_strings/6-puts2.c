#include "main.h"

/**
 * puts2 - this is a function that prints every other character of a string,
 * starting with the first character, followed by a new line.
 * @str: input character
 * Return: Empty
 */

void puts2(char *str)
{
	int a = 0, b = 0;

	while (str[a] != '\0')
		a++;

	a -= 1;

	for (; b <= a; b += 2)
		_putchar(str[b]);

	_putchar('\n');
}
