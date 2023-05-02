#include "lists.h"

/**
 * print_listint - prints all the elements from object of type listint_t
 * @h: pointer to the head node of the list
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		node_count++;
		h = h->next; /* set pointer to the next element */
	}

	return (node_count);
}
