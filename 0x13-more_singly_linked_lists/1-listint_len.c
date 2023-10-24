#include "lists.h"
#include <stdio.h>

/**
 * listint_len - print num of ele in listint
 * @h: list head
 *
 * Return: nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
