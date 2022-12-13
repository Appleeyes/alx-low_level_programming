#include "main.h"

/**
 * _islower - writes a function that checks for lowercase character.
 *@c: letter
 * Return: Always 1 if c is lowercase & 0 if uppercase (success)
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

