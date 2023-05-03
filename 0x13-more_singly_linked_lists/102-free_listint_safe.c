#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @h: pointer to the first node in the linked list
 *
 * Return: number of elements in the freed list
 */

size_t free_listint_safe(listint_t **h)
{
	size_t size = 0;
	listint_t *prev, *temp;
	listint_t *slow = *h;
	listint_t *fast = (*h) ? (*h)->next : NULL;

	while (fast && fast > slow)
	{
		temp = slow;

		slow = fast;
		fast = fast->next;
		free(temp);
		size++;
	}
	if (fast)
	{
		prev = slow;
		slow = slow->next;
		while (slow && slow != prev)
		{
			temp = slow;

			slow = slow->next;
			free(temp);
			size++;
		}
		if (slow)
		{
			free(slow);
			size++;
		}
	}
	else if (slow)
	{
		free(slow);
		size++;
	}
	*h = NULL;
	return (size);
}
