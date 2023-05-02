#include "lists.h"

/**
 * listint_len - get the number of element from object of type listint_t
 * @h: pointer to the head node of the list
 *
 * Return: the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		node_count++;
		h = h->next; /* set pointer to the next element */
	}

	return (node_count);
}
