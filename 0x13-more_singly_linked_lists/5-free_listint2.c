#include "lists.h"

/**
 * free_listint2 - frees a list and sets the
 * head to NULL
 * @head: pointer to the head node of the list
 */
void free_listint2(listint_t **head)
{
	listint_t *previous;

	while (*head != NULL)
	{
		previous = *head;
		*head = (*head)->next;
		free(previous);
	}

	*head = NULL;
}
