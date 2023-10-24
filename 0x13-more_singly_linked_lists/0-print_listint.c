#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Print the elements of a listint_t.
 * @h: pointer to list_t list.
 *
 * Return: The number of nodes in the list_t list.
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	if (h != NULL)
	{
		count++;
		printf("%d\n", h->n);
		h = h->next;
	}
	else
	{
		printf("error in code");
	}

	return (count);
}
