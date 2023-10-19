#include "lists.h"

/**
 * list_len - print number of elements in a linked list
 *@h: list pointer
 *
 *Return: number of elements
*/

size_t list_len(const list_t *h)
	{
		size_t value = 0;

		while (h)
		{
			value++;
			h = h->next;
		}

		return (value);
	}
