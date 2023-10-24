#include "lists.h"

/**
 * pop_listint - Pop the head node of listint_t
 * @head: pointer to listint_t
 *
 * Return: 0 if Valid else NULL
 */
int pop_listint(listint_t **head)
{
	listint_t *f_free;
	int p;

	if (*head == NULL)
	{
		return (0);
	}

	f_free = *head;
	p = (*head)->n;
	*head = (*head)->next;

	free(f_free);

	return (p);
}
