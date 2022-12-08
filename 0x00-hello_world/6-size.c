#include <stdio.h>

/**
 * main -Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int intType;
	float fltType;
	double dblType;
	char charType;

	printf("Size of a int: %lu byte(s)\n", (unsigned long)sizeof(intType));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(fltType));
	printf("Size of a double: %lu byte(s)\n", (unsigned long)sizeof(dblType));
	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(charType));
	return (0);
}

