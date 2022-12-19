#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <time.h>

/**
 * checksum - executes checksum
 * @s: input char
 * Return: checksum
 */

unsigned long checksum(char *s)
{
	unsigned long sum = 0;

	while (*s != 0)
	{
		sum += *s;
		s++;
	}
	return (sum);
}
