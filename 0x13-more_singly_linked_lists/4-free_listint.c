#include "lists.h"
#include <stdio.h>

/**
 * free_listint - free a listint_t
 * @head: pointer to listint_t
 */
void free_listint(listint_t *head)
{
	listint_t *f_free;

	while (head != NULL)
	{
		f_free = head->next;
		free(head);
		head = f_free;
	}
}
