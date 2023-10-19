#include <stdlib.h>
#include "lists.h"

/**
 * free_list - free list_t
 * @head: header pointer
 * Return: nothing (0)
 */

void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp->str);
		free(tmp);
	}
}
