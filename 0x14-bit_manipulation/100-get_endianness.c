#include "main.h"

/**
 * get_endianness - A function that checks endianness
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int aux = 255;
	int *tester;
	char *step;

	tester = &aux;
	step = (char *)tester;
	if (*step ==  0)
	return (0);
	return (1);
}
