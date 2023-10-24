#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts new node to listint_t
 * @head: points to listint
 * @idx: index of listint_t list
 * @n: int n.
 *
 * Return: new address if valid else NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *nw, *cpy = *head;
	unsigned int node;

	nw = malloc(sizeof(listint_t));
	if (nw == NULL)
		return (NULL);

	nw->n = n;

	if (idx == 0)
	{
		nw->next = cpy;
		*head = nw;
		return (nw);
	}

	for (node = 0; node < (idx - 1); node++)
	{
		if (cpy == NULL || cpy->next == NULL)
			return (NULL);

		cpy = cpy->next;
	}

	nw->next = cpy->next;
	cpy->next = nw;

	return (nw);
}
