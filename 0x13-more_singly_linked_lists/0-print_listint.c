#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Print the elements of a listint_t
 * @h: pointer to list_t list
 *
 * Return: The number of nodes in the list_t list
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (count);
}
