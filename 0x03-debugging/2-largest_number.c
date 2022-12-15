#include "main.h"

/**
 *largest_number - returns the largest of 3 numbers
 *@a: first integer
 *@b: second integer
 *@c: third integer
 *Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int big;

	if (a >= b && a >= c)
	{
		big = a;
	}
	else if (b >= a && b >= c)
	{
		big = b;
	}
	else if (c >= a && c >= b)
	{
		big = c;
	}

	return (big);

}
