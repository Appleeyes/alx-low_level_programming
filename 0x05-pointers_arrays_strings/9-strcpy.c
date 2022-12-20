#include "main.h"
/**
 * _strcpy - this is a function that copies the string
 * @dest: pointer to string destination
 * @src: pointer to source string
 * Return: value after compiling
 */
char *_strcpy(char *dest, char *src)
{
	char *a = dest;

	while (*src)
		*dest++ = *src++;
	return (a);
}
