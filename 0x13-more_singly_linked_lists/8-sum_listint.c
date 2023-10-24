#include "lists.h"
#include <stdio.h>

/**
 * sum_listint - sum of listint_t
 * @head: points to listint_t list
 *
 * Return: 0 if valid else NULL
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	else
	{
		printf("error");
	}
	return (sum);
}
