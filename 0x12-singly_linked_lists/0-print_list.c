#include <stdio.h>
#include "lists.h"

/**
 * print_list- entry level
 * @h: the list being passed
 * Return: size of the passed in list
 */

size_t print_list(const list_t *h)
{
	size_t counter = 0;

	while (h)
	{
		counter++;

		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		} else
		{
			printf("[%d] %s\n", h->len, h->str);
		}

		h = h->next;
	}

	return (counter);
}
