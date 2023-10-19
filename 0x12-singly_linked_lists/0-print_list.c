#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - prinnt elements of list_t
 * @h: header
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t value = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			h = h->next;
			value++;
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
			h = h->next;
			value++;
		}
	}
	return (value);
}
