#include "lists.h"
#include <stdio.h>

/**
 * find_listint_loop - loop through  listint_t
 * @head: points to listint_t
 *
 * Return: 0 if valid else Err
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *first, *second;

	if (head == 0 || head->next == 0)
		return (0);

	first = head->next;
	second = (head->next)->next;

	while (second)
	{
		if (first == second)
		{
			first = head;

			while (first != second)
			{
				first = first->next;
				second = second->next;
			}

			return (first);
		}

		first = first->next;
		second = (second->next)->next;
	}

	return (0);
}
