#include "main.h"
/**
 * _strcpy - this is a function that copies the string pointed
 * to by src, including the terminating null byte (\0),
 * to the buffer pointed to by dest.
 * @dest: pointer to string destination
 * @src: pointer to source string
 * Return: value after compiling
 */
char *_strcpy(char *dest, char *src)
{
	char *n = dest;

	while (*src)
		*dest++ = *src++;
	return (n);
}
