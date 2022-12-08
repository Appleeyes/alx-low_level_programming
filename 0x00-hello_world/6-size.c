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
	long int lgiType;
	long long int lTyp;
	char charType;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(charType));
	printf("Size of a int: %lu byte(s)\n", (unsigned long)sizeof(intType));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(lgiType));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(lTyp));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(fltType));
	return (0);
}

