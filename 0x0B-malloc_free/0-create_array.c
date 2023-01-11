#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * create_array - main entry
 * @size: input character
 * @c: char
 * Return: 0
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	array = malloc(sizeof(char) * size);

	if (size == 0 || array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;
	return (array);
}
