#include "main.h"

/**
 * _strlen - this is a function that returns the length of a string.
 * @s: input character
 * Return: value of the length
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
