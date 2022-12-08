#include <stdio.h>

/**
 * main -Entry point
 *
 * Return: Always 0 (Success)
 */
int main
{
	int intType;
	float fltType;
	double dblType;
	char chartype;

	printf("Size of int: %ld bytes\n",sizeof(intType));
	printf("Size of float: %ld bytes\n",sizeof(fltType));
	printf("Size of double: %ld bytes\n",sizeof(dblType));
	printf("Size of char: %ld bytes\n",sizeof(charType));

	return (0);
