#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @h: head of the list
 *
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *value = h;
	size_t node = 0;

	while (value != NULL)
		{
			printf("%d\n", node->n);
			count += 1;
			cursor = cursor->next;
		}
	return (node);
}
