#include "main.h"

/**
 * _isalpha - this is a function that checks for alphabetic character.
 *@c: an input character
 * Return: Always 1 when c is an alphabet, otherwise return 0
 */

int _isalpha(int c)
{
	char big, small;

	for (big = 'A'; big <= 'Z'; big++)
	{
		for (small = 'a'; small <= 'z'; small++)
		{
			if (c == big && c == small)
			return (1);
		}
		else
		return (0);
	}
}

