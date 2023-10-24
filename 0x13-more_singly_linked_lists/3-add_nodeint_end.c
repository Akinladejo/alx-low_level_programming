#include "lists.h"

/**
 * add_nodeint_end - concat n_node node to end of listint_t
 * @head: A pointer to head of the listint_t
 * @n: int n node
 *
 * Return: 0 if Valid else NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *n_node, *l_node;

	n_node = malloc(sizeof(listint_t));
	if (n_node == NULL)
		return (NULL);

	n_node->n = n;
	n_node->next = NULL;

	if (*head == NULL)
		*head = n_node;

	else
	{
		l_node = *head;
		while (l_node->next != NULL)
			l_node = l_node->next;
		l_node->next = n_node;
	}

	return (*head);
}
