#include "lists.h"

/**
 * free_listint2 - free listint_t2
 * @head: pointer to  the listint_t2
 *
 * Description: head equal NULL.
 */
void free_listint2(listint_t **head)
{
	listint_t *f_free;

	if (head == NULL)
	{
		return;
	}

	while (*head)
	{
		f_free = (*head)->next;
		free(*head);
		*head = f_free;
	}

	head = NULL;
}
