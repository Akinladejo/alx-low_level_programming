#include "lists.h"

/**
 *add_nodeint - concat new node to listint
 *@head: pointer to head of the listint
 *@n: int n node
 *
 *Return: 0 if valid else NULL
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}
